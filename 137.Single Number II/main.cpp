#include <iostream>
#include "solution.h"

int main(void)
{
	vector<int> test = {1,2,1,1,2,-1,2,3,-1,-1};
	Solution s;
	std::cout << s.singleNumber(test) << std::endl;
	return 0;
}
