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
void dfs(TreeNode* root,int targetSum,int sum,vector<vector<int>> &ans,vector<int> &group){
        if(!root){
            return;
        }
        group.push_back(root->val);
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(targetSum==sum){
                ans.push_back(group);
            }
        }
        else{
            dfs(root->left,targetSum,sum,ans,group);
            dfs(root->right,targetSum,sum,ans,group);
        }
        group.pop_back();
        }

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> group;
    dfs(root,targetSum,0,ans,group);
    return ans;
        
    }
};