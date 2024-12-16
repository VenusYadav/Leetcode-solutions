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
    int maxDepth(TreeNode* root) {
        if (root == NULL) 
            return 0;
        queue<TreeNode*> que;
        que.push(root);
        que.push(NULL);
        int height = 0;

        while(!que.empty())
        {
            root = que.front();
            que.pop();
            if(root == NULL)
            {
               if (!que.empty()) {
                    que.push(NULL); // Add a new level marker
                }
                height++;
            }   
            else
            {
                if(root->left != NULL)
                que.push(root->left);
                if(root->right != NULL)
                que.push(root->right);
            }

        }
        return height;
    }
};