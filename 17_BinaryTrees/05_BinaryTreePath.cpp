class Solution {
public:
    void helper(TreeNode* root,string s, vector<string>& v){
        if(root==NULL) return;
        string a = to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            s += a;
            v.push_back(s);
            return;
        }
        helper(root->left, s+a+"->", v);
        helper(root->right, s+a+"->", v);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root ,"" , ans);
        return ans;
    }
};