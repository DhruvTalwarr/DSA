class Solution {
public:
    unordered_map<int, int> dp;
    int fib(int n) {

        //recursion
        // if(n == 0)
        // return 0;
        // if(n == 1) 
        // return 1;

        // return fib(n - 1) + fib(n - 2);

        //dp(memoization)
        // if(n == 0 || n == 1) return n;

        // if(dp.find(n) != dp.end()) return dp[n];

        // int a1 = fib(n - 1);
        // int a2 = fib(n - 2);

        // int ans = a1 + a2;
        // dp[n] = ans;

        // return ans;
        
        //DP(tabulation)
        if(n == 0 || n == 1) return n;
        int prev = 1;
        int prev_prev = 0;

        for(int i = 2 ; i <= n ; i++){
            int ans = prev + prev_prev;
            prev_prev = prev;
            prev = ans;
        }
        return prev;

    }
};