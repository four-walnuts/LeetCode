#include <iostream>
#include "solution.h"

int main(void)
{
	Solution s;
	for(int i = 0; i < 20; ++i)
	{
		std::cout << i << ": " << s.numTrees(i) << std::endl;
	}
	return 0;
}
