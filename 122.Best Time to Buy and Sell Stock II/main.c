#include <iostream>
#include "solution.h"

int main(void)
{
	std::vector<int> prices1 = {1,2,3,2,3,4,5};
	std::vector<int> prices2 = {};
	Solution s;
	std::cout << s.maxProfit(prices1) << std::endl;
	std::cout << s.maxProfit(prices2) << std::endl;
}
