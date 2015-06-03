#include <iostream>
#include "solution.h"

/*
                1
               / \
              2   3
             / \ / \
            4  5 6  7

*/

int main(void)
{
	TreeLinkNode n1(1);
	TreeLinkNode n2(2);
	TreeLinkNode n3(3);
	TreeLinkNode n4(4);
	TreeLinkNode n5(5);
	TreeLinkNode n6(6);
	TreeLinkNode n7(7);

	n1.left = &n2;	n1.right = &n3;
	n2.left = &n4;	n2.right = &n5;
	n3.left = &n6;	n3.right = &n7;

	Solution s;
	s.connect(&n1);
	
	TreeLinkNode* p = &n1;
	while(p)
	{
		TreeLinkNode* q;
		for(q = p; q; q = q->next)
		{
			std::cout << q->val << " ";
		}
		std::cout << std::endl;
		p = p->left;
	}
	return 0;
}
