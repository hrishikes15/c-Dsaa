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
    int solve(TreeNode* root , int val){
        if(root == nullptr){
            return 0;
        }
        val = (2 * val) + root -> val;

        if(root -> left == nullptr && root -> right == nullptr){
            return val;
        } 
        return solve(root -> left , val) + solve(root -> right , val);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return solve(root,0);
    }
};