#include <vector>
#include <stack>

using std::vector;
using std::stack;

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
	vector<int> preorderTraversal(TreeNode* root)
	{
		vector<int> ret;
		stack<TreeNode*> stk;
		for(auto it = root; it;)
		{
			ret.push_back(it->val);
			if(it->right)
			{
				stk.push(it->right);
			}
			if(it->left)
			{
				it = it->left;
			}
			else if(!stk.empty())
			{
				it = stk.top();
				stk.pop();
			}
			else
			{
				break;
			}
		}
		return ret;
	}
};
