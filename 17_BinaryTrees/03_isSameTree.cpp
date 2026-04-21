// LC-100

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
        if(p->val!=q->val) return false;
        bool isLeftSame = isSameTree(p->left,q->left);
        if(isLeftSame==false) return false;

        bool isRightSame = isSameTree(p->right,q->right);
        if(isRightSame==false) return false;
        return true;
    }
};