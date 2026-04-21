// LC-543

class Solution {
public:
    void helper(TreeNode* root, int &maxDia){
        if(root == NULL) return;
        int dia = treeLevels(root->left) + treeLevels(root->right);
        maxDia = max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }
    int treeLevels(TreeNode* root){
        if(root == NULL) return 0;
        int maxLeftLevel = treeLevels(root->left);
        int maxRightLevel = treeLevels(root->right);
        return 1 + max(maxLeftLevel,maxRightLevel);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root,maxDia);
        return maxDia;
    }
};