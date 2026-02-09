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
    TreeNode* solve(int l , int r  , vector<int>&arr){
        if(l > r) return NULL;
        int mid = l + (r-l)/2;

        TreeNode* root = new TreeNode(arr[mid]);

        root->left = solve(l , mid-1 , arr);
        root -> right = solve(mid+1 , r, arr);

        return root;
    }
    
    void inorder(TreeNode* root , vector<int> &arr){
        if(root == NULL){
            return;
        }
        inorder(root -> left , arr);
        arr.push_back(root -> val);
        inorder(root -> right , arr); 
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(root , arr);
        return solve(0 , arr.size()-1, arr);
    }
};