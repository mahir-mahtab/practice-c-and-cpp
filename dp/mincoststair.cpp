#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int paths(int m, int n, vector<vector<int>>& dp, vector<vector<int>>& obstacleGrid) {
        if (m < 0 || n < 0) return 0;  
        if (m == 0 && n == 0) return 1; // Reached the target cell
         // Out of bounds
         if(obstacleGrid[m][n]==1) return 0;
        if (dp[m][n] != -1) return dp[m][n]; // Use cached result

        // Store the result of the current subproblem
        dp[m][n] = paths(m - 1, n, dp,k,l) + paths(m, n - 1, dp,k,l);
        return dp[m][n];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
         vector<vector<int>> dp(m, vector<int>(n, -1));
      
        if(m==1&&n==1&& obstacleGrid[m-1][n-1]==1||obstacleGrid[0][0]==1){
            return 0;
        }
        else{
       return paths(m-1,n-1,dp,obstacleGrid);
        }
    }
};