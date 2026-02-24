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
    int sum(vector<string> &ans){
        int total = 0;
        for(string &s : ans){
            int val = 0;
            for(char c : s){
                val = val * 2 + (c - '0'); 
            }
            total += val;
        }
        return total;
    }
    void solve(TreeNode* root , string &str , vector<string>&ans){
        if(root == nullptr){
            return;
        }

        str.push_back(root -> val + '0');

        if(root -> left == nullptr && root -> right == nullptr){
            ans.push_back(str);
        }
        solve(root -> left , str , ans);
        solve(root -> right , str , ans);
        str.pop_back();
        
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        vector<string> ans;
        string str = "";
        solve(root , str , ans);
        return sum(ans);
    }
};