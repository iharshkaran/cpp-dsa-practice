// 102. Binary Tree Level Order Traversal
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans; // Edge Case
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0){
            vector<int> level;
            int n = q.size(); // 1 , 2 , 4
            for(int i=1; i<=n; i++){
                TreeNode* temp = q.front();
                level.push_back(temp->val);
                q.pop();
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            ans.push_back(level); // [[1] , [2,3] , [4,5,6,7]]
        }
        return ans;
    }
};