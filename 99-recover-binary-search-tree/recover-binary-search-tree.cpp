class Solution {
public:
    vector<pair<int, TreeNode*>> res;
    
    void fun(TreeNode* root){
        if(root == NULL) return;

        fun(root -> left);
        res.push_back({root -> val, root});
        fun(root -> right);
    }

    void recoverTree(TreeNode* root) {
        fun(root);
        int galat = 0;
        TreeNode *g1first = nullptr, *g1second = nullptr, *g2second = nullptr;

        for(int i = 0 ; i < res.size() - 1 ; i++){
            if(res[i].first > res[i + 1].first){
                if(galat == 0){
                    g1first = res[i].second;
                    g1second = res[i + 1].second;
                    galat++;
                }
                else{
                    g2second = res[i + 1].second;
                    galat++;
                }
            }
        }
        
        if(galat == 1){
            swap(g1first->val, g1second->val);
        }
        else{
            swap(g1first->val, g2second->val);
        }
        return;
    }
};