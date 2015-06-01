#include <iostream>
#include "solution.h"


int main(void)
{
	Solution s;
	std::vector<int> a = {1, 2, 3, 4, 3, 2, 1};
	std::cout << s.singleNumber(a) << std::endl;
	return 0;
}
