#include <iostream>
#include <vector>
#include <map>
#include <utility> // for std::pair
#include <vector>
#include <numeric> // for std::iota
#include <algorithm> // for std::swap
#include <set> // Using set for the feasibility check iteration

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    map<pair<int, int>, int> val_pair_to_idx; // Maps pair (a[k], b[k]) to index k
    map<pair<int, int>, int> pair_counts;     // Counts frequency of each pair (a[k], b[k])

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
        pair<int, int> p = {a[i], b[i]};
        // If multiple indices have the same (a,b) pair, store one of them.
        // The feasibility check ensures consistency.
        if (val_pair_to_idx.find(p) == val_pair_to_idx.end()) {
             val_pair_to_idx[p] = i;
        }
        pair_counts[p]++;
    }

    // 1. Feasibility Check
    bool possible = true;
    set<pair<int, int>> checked_pairs; // To avoid checking p and reverse(p) separately
    int self_mirror_count = 0;

    for (auto const& [p1, count1] : pair_counts) {
        if (checked_pairs.count(p1)) {
            continue;
        }

        pair<int, int> p2 = {p1.second, p1.first}; // Reversed pair

        if (p1 == p2) { // Self-mirror pair (a[k] == b[k])
            self_mirror_count++;
            // No count check needed here as count(p1) == count(p2) trivially
            checked_pairs.insert(p1);
        } else {
            // Check if the reversed pair exists and has the same count
            if (pair_counts.find(p2) == pair_counts.end() || pair_counts.at(p2) != count1) {
                possible = false;
                break;
            }
            checked_pairs.insert(p1);
            checked_pairs.insert(p2); // Mark both as checked
        }
    }

    // Check conditions related to self-mirror pairs and array length
    if (!possible || (n % 2 == 0 && self_mirror_count > 0) || (n % 2 != 0 && self_mirror_count > 1)) {
         // If n is even, no self-mirror pairs allowed
         // If n is odd, exactly one type of self-mirror pair allowed (its count must be odd, but pair_counts handles that)
         // Let's refine: the total *number* of self-mirror elements must be 0 if n is even, 1 if n is odd.
         int actual_self_mirror_elements = 0;
         if (self_mirror_count > 0) {
             for (auto const& [p, count] : pair_counts) {
                 if (p.first == p.second) {
                      actual_self_mirror_elements += count; // Count how many elements satisfy a[k]==b[k]
                 }
             }
         }
         if (!possible || (n%2 == 0 && actual_self_mirror_elements > 0) || (n%2 != 0 && actual_self_mirror_elements != 1)) {
             cout << -1 << endl;
             return;
         }
         possible = true; // Reset possible if it was only false due to simple count
    }


    // 2. Build Target Permutation Array `target_perm`
    // target_perm[i] = original index 'k' that should end up at final position 'i'
    vector<int> target_perm(n + 1, 0); // Initialize with 0 (or another indicator for empty)
    vector<bool> original_idx_visited(n + 1, false); // Tracks if original index k has been assigned a target slot
    int left = 1;
    int right = n;
    int mid = (n % 2 != 0) ? (n + 1) / 2 : -1; // Center position if n is odd
    bool center_slot_filled = false;


    for (int k = 1; k <= n; ++k) {
        if (original_idx_visited[k]) {
            continue;
        }

        pair<int, int> p1 = {a[k], b[k]};
        pair<int, int> p2 = {b[k], a[k]};

        // We know p2 exists from feasibility check and val_pair_to_idx stores *an* index for it
        // Need the specific index 'l' such that a[l]=b[k] and b[l]=a[k] AND l hasn't been visited yet.
        // A better way: store all indices for a pair: map<pair<int,int>, vector<int>>
        // Simpler: feasibility check already ensures pairs match up. Use the stored index.

        int l = val_pair_to_idx[p2]; // Get *an* index for the mirror pair
        // If k==l, it's self mirror. If k!=l, they are distinct indices forming a mirror pair.

        if (k == l) { // Self-mirror pair found via index k
            if (mid == -1 || center_slot_filled) { // n must be odd, center must be free
                possible = false;
                break;
            }
            target_perm[mid] = k;
            original_idx_visited[k] = true;
            center_slot_filled = true;
        } else { // Mirror pair (k, l) where k != l
             if (original_idx_visited[l]) continue; // Mirror already processed via 'l' earlier

             if (left > right) { // Should not happen if feasible
                 possible = false;
                 break;
             }
             target_perm[left] = k;
             target_perm[right] = l;
             original_idx_visited[k] = true;
             original_idx_visited[l] = true;
             left++;
             right--;
        }
    }

    // Final check: ensure all slots filled and center logic was correct
    for(int i = 1; i <= n; ++i) {
        if (target_perm[i] == 0) { // Check if any target slot remained unfilled
            possible = false;
            break;
        }
    }
     if (!possible || (n % 2 != 0 && !center_slot_filled) || left != right + 1) {
          cout << -1 << endl;
          return;
     }


    // 3. Calculate Swaps to achieve target_perm from identity
    vector<int> current_perm(n + 1); // Stores the original index currently at each position
    vector<int> pos(n + 1);          // pos[k] = current position of original index k
    iota(current_perm.begin() + 1, current_perm.end(), 1); // Initially: position i holds original index i
    iota(pos.begin() + 1, pos.end(), 1);                 // Initially: original index k is at position k

    vector<pair<int, int>> swaps;

    for (int i = 1; i <= n; ++i) {
        // `correct_val` is the original index that *should* be at position `i`
        int correct_val = target_perm[i];
        // `current_val` is the original index *currently* at position `i`
        int current_val = current_perm[i];

        if (current_val != correct_val) {
            // Find the current position 'j' of the element that should be here ('correct_val')
            int j = pos[correct_val];

            // Record the swap between positions i and j
            swaps.push_back({i, j});

            // Perform the swap in current_perm
            swap(current_perm[i], current_perm[j]);

            // Update the positions in the 'pos' array
            pos[current_val] = j; // 'current_val' is now at position 'j'
            pos[correct_val] = i; // 'correct_val' is now at position 'i'
        }
    }

    // 4. Output result
    cout << swaps.size() << endl;
    for (const auto& sw : swaps) {
        cout << sw.first << " " << sw.second << endl;
    }
}

int main() {
    // Faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}