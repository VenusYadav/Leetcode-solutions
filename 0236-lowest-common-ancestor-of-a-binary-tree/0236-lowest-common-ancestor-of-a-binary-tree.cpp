/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == NULL)
          return NULL;

        if(root == p)
          return p;

        if(root == q)
          return q;

        TreeNode* leftanc = lowestCommonAncestor(root->left, p, q) ;
        TreeNode* rightanc = lowestCommonAncestor(root->right, p, q) ;     

        if(leftanc == NULL && rightanc == NULL)
          return NULL;

        else if(leftanc != NULL && rightanc == NULL)
          return leftanc;  
        else if(leftanc == NULL && rightanc != NULL)
          return rightanc;  
        else
          return root;      

    }
};