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
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> ans;
        map<int,int> mapp;
        int cnt = 0;

        if(root == nullptr) return 0;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sum = 0;
            int size = q.size();
            vector<int> level;
            for(int i = 0 ; i < size ; i++){
                TreeNode* node = q.front(); q.pop();

                if(node -> left != nullptr) q.push(node->left);
                if(node -> right != nullptr) q.push(node -> right);

                level.push_back(node -> val);
            }
            for(int i = 0 ; i < level.size() ; i++) {
                sum += level[i];
            }
            cnt ++;
            mapp[cnt] = sum;
        }
        int maxi = INT_MIN;
        int level = -1;
        for(auto it = mapp.begin() ; it !=  mapp.end() ; it++){
            if(it->second > maxi){
                maxi = it -> second;
                level = it -> first;

            }
        }
        return level;
        
    }
}; 