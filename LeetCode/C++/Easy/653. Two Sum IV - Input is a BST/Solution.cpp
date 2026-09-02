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

    vector<int> temp;
    void fun(TreeNode* root){
        if(root == NULL) return;

        fun(root -> left);
        temp.push_back(root -> val);
        fun(root -> right);

        return;
    }

    bool findTarget(TreeNode* root, int k) {
        fun(root);
        int n = temp.size();
        int left = 0;
        int right = n - 1;
        while(left <= right){
            if(temp[left] + temp[right] == k){
                return true;
            }
            else if(temp[left] + temp[right] > k){
                right--;
            }
            else{
                left++;
            }
        }
        return false;
    }
};