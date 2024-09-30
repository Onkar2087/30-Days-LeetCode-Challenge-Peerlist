class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<Treenode<int> *> pending;
        vector<vector<int>> ans;

        if(root == NULL)
        {
            return ans;
        }

        pending.push(root);
        while(pending.size() != 0)
        {
            int n = pending.size();
            vector<int> cur;
            while(n != 0)
            {
                TreeNode<int> *front = pending.front();
                pending.pop();
                cur.push_back(front);
                if(front -> left != NULL)
                {
                    pending.push(front->left);
                }
                if(front-> right != NULL)
                {
                    pending .push_back(front->right);
                }
                n--;
            }
            ans.push_back(cur);
        }
        return ans;
    }
};