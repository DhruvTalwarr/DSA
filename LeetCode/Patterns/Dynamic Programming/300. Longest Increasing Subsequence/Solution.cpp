class Solution {
public:

    int fun(vector<int> &a, int n, int i, int prev){
        if(i == n) return 0;

        if(prev == -1 || a[i] > a[prev]){
            int c1 = 1 + fun(a, n, i + 1, i);
            int c2 = fun(a, n, i + 1, prev);

            return max(c1, c2);
        }

        return fun(a, n, i + 1, prev);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int prev = -1;
        int i = 0;
        vector<vector<int>>dp(n + 1);
        
        for(int i = 0 ; i < n ; ; i++){
            vector<int> t(n + 1, -1);
            
        }
        return fun(nums, n, i, prev);
    }
};