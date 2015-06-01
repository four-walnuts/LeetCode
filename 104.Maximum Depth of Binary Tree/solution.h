struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
public:
	TreeNode(int i):val(i), left(NULL), right(NULL){}
};

class Solution
{
public:
	int maxDepth(TreeNode* root)
	{
		if(root == NULL)
		{
			return 0;
		}
		int left = maxDepth(root->left);
		int right = maxDepth(root->right);
		return 1 + (left > right ? left : right);
	}
};
