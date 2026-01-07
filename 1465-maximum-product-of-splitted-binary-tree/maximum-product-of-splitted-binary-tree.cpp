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
    long long sum = 0;
    long long ans = 0;

    void solve(TreeNode* root){
        if(root == nullptr) return;
        sum += root->val;
        solve(root->left);
        solve(root->right);
    }

    long long dfs(TreeNode* node){
        if(node == nullptr) return 0;   

        long long left = dfs(node->left);
        long long right = dfs(node->right);

        long long sub = left + right + node->val;

        ans = max(ans, sub * (sum - sub));

        return sub;
    }

public:
    int maxProduct(TreeNode* root) {
        solve(root);      
        dfs(root);        
        return ans % 1000000007 ;
    }
};
