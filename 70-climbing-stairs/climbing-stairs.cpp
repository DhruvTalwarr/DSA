class Solution {
public:

    // unordered_map<int, int> dp;
    // int fun(int i, int n){
    //     if(i == n) return 1;
    //     if(i > n) return 0;
    //     if(dp.find(i) != dp.end()) return dp[i];

    //     int a1 = fun(i + 1, n);
    //     int a2 = fun(i + 2, n);

    //     return dp[i] = a1 + a2;
    // }

    int climbStairs(int n) {
        // int count = fun(0, n);

        // return count;
        if(n <= 2) return n;
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3 ; i <= n ; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};