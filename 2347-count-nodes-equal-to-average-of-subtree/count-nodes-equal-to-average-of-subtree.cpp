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
    pair<int,int> solve(TreeNode* root , int &ans){
        if(root == NULL)
            return {0,0};
        
        auto left = solve(root->left,ans);

        auto right = solve(root->right,ans);

        int sum = root->val + left.first + right.first;
        int cnt = 1 + left.second + right.second;

        int avg = sum/cnt;

        if(avg == root->val)
            ans++;
        
        return {sum , cnt};

    }
public:
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        solve(root , ans);
        return ans;
    }
};