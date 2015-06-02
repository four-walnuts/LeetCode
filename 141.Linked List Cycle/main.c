#include <iostream>
#include "solution.h"

/*
0--->1--->2---->3
         /|\    |
          |    \|/
          5<----4
*/

int main(void)
{
	ListNode n0(0);
	ListNode n1(1);
	ListNode n2(2);
	ListNode n3(3);
	ListNode n4(4);
	ListNode n5(5);

	n0.next = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n5.next = &n2;

	Solution s;
	std::cout << s.hasCycle(&n0) << std::endl;
	return 0;
}
