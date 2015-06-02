#include <iostream>
#include "solution.h"

int main(void)
{
	std::vector<int> v1 = {2,1,5,7,3,9,0,1};
	std::vector<int> v2 = {2,1,5,7,3,9,0};
	Solution s;
	std::cout << s.containsDuplicate(v1) << std::endl;
	std::cout << s.containsDuplicate(v2) << std::endl;
	return 0;
}
