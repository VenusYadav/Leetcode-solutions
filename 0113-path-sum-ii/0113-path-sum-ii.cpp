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

    void solve(TreeNode* root, int targetSum, int sum,  vector<int>vec, vector<vector<int>>&resultVec)
    {

        if(root == NULL)
          return;
        
        sum += root->val;
        vec.push_back(root->val);

        if(root->left == NULL && root->right == NULL)
        {
            if(sum == targetSum)
            {
                resultVec.push_back(vec);
            }

            else return ;
        } 

        solve(root->left, targetSum, sum, vec, resultVec);
        solve(root->right, targetSum, sum, vec, resultVec);

        vec.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      
      int sum = 0;
      vector<vector<int>>resultVec ;
      vector<int>vec;
      solve(root, targetSum, sum, vec, resultVec);

      return resultVec ;
    }
};