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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;

        queue<TreeNode*> q;
        q.push(root);
        
        bool lefttoright = true;

        while(!q.empty()){
            int lvl_size = q.size();
            vector<int> temp(lvl_size);

            for(int i = 0 ; i < lvl_size ; i++){
                TreeNode* t = q.front();
                q.pop();

                int idx = lefttoright ? i : (lvl_size - 1 - i);
                temp[idx] = t -> val;

                if(t -> left != NULL) 
                q.push(t -> left);
                if(t -> right != NULL)
                q.push(t -> right);
            }

            lefttoright = 1 - lefttoright;
            res.push_back(temp);
        }
        return res;
    }
};