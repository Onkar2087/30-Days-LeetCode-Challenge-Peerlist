class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* a, TreeNode* b) 
    {
    if(root == NULL)
    {
        return root;
    }

    if(root->val == a->val || root->val == b->val)
        return root;

    TreeNode* left = lowestCommonAncestor(root->left, a, b);
    TreeNode* right = lowestCommonAncestor(root->right, a, b);

    if(left == NULL && right == NULL)
        return NULL;

    else if(left != NULL && right == NULL)
        return left;

    else if(left == NULL && right != NULL)
        return right;

    else
        return root;
    }
};