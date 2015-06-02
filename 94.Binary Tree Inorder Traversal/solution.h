#include <vector>
#include <stack>

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
	std::vector<int> inorderTraversal(TreeNode* root)
	{
		std::vector<int> ret;
		std::stack<TreeNode*> stk;
		TreeNode* p = root;
		while(!stk.empty() || p)
		{
			if(p)
			{
				stk.push(p);
				p = p->left;
			}
			else
			{
				p = stk.top();
				stk.pop();
				ret.push_back(p->val);
				p = p->right;
			}
		}
		return ret;
	}
};

/*

vector<int> inorderTraversal(TreeNode* root)
{
	stack<TreeNode*> stk;
	TreeNode* p = root;
	vector<int> ret;
	while(p || !stk.empty())
	{
		while(p)
		{
			stk.push(p);
			p = p->left;
		}
		p = stk.top();
		ret.push_back(p->val);
		stk.pop();
		p = p->right;
	}
	return ret;
}
*/
