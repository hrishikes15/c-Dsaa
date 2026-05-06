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
    // bool check(TreeNode* root , long minVal , long maxVal){
    //     if(root == NULL){
    //         return true;
    //     }

    //     if(root -> val <= minVal || root -> val >= maxVal){
    //         return false;
    //     }
    //     return check(root->left , minVal , root->val) && check(root->right , root->val , maxVal);
    // }
        void inOrder(TreeNode* root , vector<int>&vec){
            if(root == NULL){
                return ;
            }

            inOrder(root->left,vec);
            vec.push_back(root->val);
            inOrder(root->right,vec);

        }
public:
    bool isValidBST(TreeNode* root) {
        // return check(root , LONG_MIN, LONG_MAX);
        vector<int> vec;
        inOrder(root , vec);

        for(int i = 0 ; i < vec.size()-1 ; i++){
            if(vec[i] >= vec[i+1]) return false;
        }
        return true;
    }
};