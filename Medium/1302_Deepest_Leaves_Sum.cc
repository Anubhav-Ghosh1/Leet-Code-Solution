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
int height(TreeNode* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int heightMax = max(left,right)+1;
    return heightMax;
}
    void inorder(TreeNode *root,int &sum,int depth,int a)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL && depth == a)
        {
            sum += root->val;
        }
        inorder(root->left,sum,depth,a+1);
        inorder(root->right,sum,depth,a+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        int heightOfTree = height(root);
        inorder(root,sum,heightOfTree,1);
        return sum;
    }
};