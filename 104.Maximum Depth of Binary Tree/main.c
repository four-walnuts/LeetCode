#include <iostream>
#include "solution.h"

/*
              1
             / \
            2   3
           /   / \
          4   5   6
             /   / \
            7   8   9
               /
              10
*/
int main(void)
{
	TreeNode root(1);
	TreeNode t2(2);
	TreeNode t3(3);
	TreeNode t4(4);
	TreeNode t5(5);
	TreeNode t6(6);
	TreeNode t7(7);
	TreeNode t8(8);
	TreeNode t9(9);
	TreeNode t10(10);

	root.left = &t2;
	root.right = &t3;
	t2.left = &t4;
	t3.left = &t5;
	t3.right = &t6;
	t5.left = &t7;
	t6.left = &t8;
	t6.right = &t9;
	t8.left = &t10;

	Solution s;
	std::cout << s.maxDepth(&root) << std::endl;
	return 0;
	
}
