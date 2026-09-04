/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<vector<int>> res;
    vector<int> diary;

    void fun(TreeNode* root, int target, int sum){
        if(root == NULL) return;

        sum += root -> val;
        diary.push_back(root -> val);
        if(root -> left == NULL && root -> right == NULL){
            if(sum == target){
                res.push_back(diary);
                diary.pop_back();
                return;
            }
        }

        fun(root -> left, target, sum);
        fun(root -> right, target, sum);

        diary.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        fun(root, targetSum, sum);
        return res;
    }
};