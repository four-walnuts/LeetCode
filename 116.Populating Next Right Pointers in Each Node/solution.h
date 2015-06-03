
struct TreeLinkNode
{
	int val;
	TreeLinkNode* left, *right, *next;
	TreeLinkNode(int x):val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution
{
public:
	void connect(TreeLinkNode* root)
	{
		if(!root)
		{
			return;
		}
		while(root->left)
		{
			TreeLinkNode* p;
			for(p = root; p; p = p->next)
			{
				p->left->next = p->right;
				if(p->next)
				{
					p->right->next = p->next->left;
				}
			}
			root = root->left;
		}
	}
};
