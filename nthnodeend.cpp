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
        vector<string> binaryTreePaths(TreeNode* root) {


            vector<string> result;
            if(root == NULL)
                return result;
            if(root->left == NULL && root->right == NULL)
            {
                result.push_back(to_string(root->val));
                return result;
            }
            vector<string> left = binaryTreePaths(root->left);
            for(int i = 0; i < left.size(); i++)
            {
                result.push_back(to_string(root->val) + "->" + left[i]);
            }
            vector<string> right = binaryTreePaths(root->right);
            for(int i = 0; i < right.size(); i++)
            {
                result.push_back(to_string(root->val) + "->" + right[i]);
            }
            return result;

        }
    };