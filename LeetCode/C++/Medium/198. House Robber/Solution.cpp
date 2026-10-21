class Solution {
public:

    int fun(vector<int>& nums, int n, int i, int free){
        if(i == n) return 0;

        if(free == 0) return fun(nums, n, i + 1, 1);

        int c1 = nums[i] + fun(nums, n, i + 1, 0);
        int c2 = fun(nums, n, i + 1, 1);

        return max(c1, c2);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        return fun(nums, n, 0, 1);
        
    }
};