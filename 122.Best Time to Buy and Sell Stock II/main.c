#include <iostream>
#include "solution.h"

int main(void)
{
	std::vector<int> prices = {1,2,3,2,3,4,5};
	Solution s;
	std::cout << s.maxProfit(prices) << std::endl;
}
