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
bool rec(TreeNode*root,int sum,int targetSum){
if(root==NULL){
    return false;
}
sum+=root->val;
if(root->left==NULL && root->right==NULL){
    return sum==targetSum;
    
}
return rec(root->left,sum,targetSum) || rec(root->right,sum,targetSum);


}
    bool hasPathSum(TreeNode* root, int targetSum) {
       return rec(root,0,targetSum);
        
    }
};