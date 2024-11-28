#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

/*
using ordered_set
oset<ll> st;

st.order_of_key(x)----> returns number of elements strictly less than x.

for using ordered-set with multiset properties-use this.

template<class T> using oset =tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update> ;
*/

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define ll                  long long
#define ld                  long double
#define mod                 1000000007
#define inf                 1e9
#define endl                '\n'


static bool comp(const pair<int, int>& p1, const pair<int, int>& p2){
    if(p1.first!=p2.first){
        return p1.first<p2.first;
    }else{
        return p1.second>p2.second;
    }
}

ll gcd(ll a, ll b){
    if(b==0) return a;

    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

int dx[] = {-1, 1, 0 , 0};
int dy[] = {0, 0, -1 , 1};


void solve(){
    ll n, m; cin>>n>>m;
    vector<vector<ll>> a(n, vector<ll> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ll n1=-1, n2=-1, n3=-1,n4=-1;
            if(i) n1 = a[i-1][j];
            if(i+1<n) n2 = a[i+1][j];
            if(j) n3 = a[i][j-1];
            if(j+1<m) n4 = a[i][j+1];

            ll maxi = max({n1,n2,n3,n4});
            if(a[i][j] > maxi){
                a[i][j] = 0;
                if(n1 != -1) a[i][j] = max(a[i][j], n1);
                if(n2 != -1) a[i][j] = max(a[i][j], n2);
                if(n3 != -1) a[i][j] = max(a[i][j], n3);
                if(n4 != -1) a[i][j] = max(a[i][j], n4);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    fast_io;
    cout << fixed;
    cout << setprecision(10);
 
    int t;
    t=1;
    cin>>t;
 
    while(t--)
    {
        solve();
    }
}


