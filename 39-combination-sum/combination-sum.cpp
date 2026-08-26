class Solution {
public:

    void fun(vector<int> &a, int n, int idx, vector<int> &diary, vector<vector<int>> &res, int sum, int target){
        if(sum == target){
            if(sum == target){
                res.push_back(diary);
                return;
            }
        }
        if(idx == n || sum > target){
            return;
        }

        fun(a, n, idx + 1, diary, res, sum, target);

        if(a[idx] + sum <= target){
            diary.push_back(a[idx]);
            sum = sum + a[idx];
            fun(a, n, idx, diary, res, sum, target);
            diary.pop_back();
            sum = sum - a[idx];
        }
        return;

    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        int idx = 0;
        int sum = 0;
        vector<int> diary;
        vector<vector<int>> res;
        fun(candidates, n, idx, diary, res, sum, target);
        return res;
    }
};