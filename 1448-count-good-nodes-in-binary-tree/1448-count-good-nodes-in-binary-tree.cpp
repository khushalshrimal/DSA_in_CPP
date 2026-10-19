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
int rec(TreeNode* root,int maxi){
    int count =0;
    if(!root){
        return 0;
    }
    if(root->val >=maxi){
        count++;
    }
    maxi=max(maxi,root->val);
    count+=rec(root->left,maxi);
    count+=rec(root->right,maxi);
    return count;
}
    int goodNodes(TreeNode* root) {
        return rec(root,INT_MIN);
        
    }
};