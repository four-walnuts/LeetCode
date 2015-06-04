#include <iostream>
#include "solution.h"

int main(void)
{
	std::vector<int> vec = {1, 3, 5, 6};
	Solution s;
	std::cout << "5: " << s.searchInsert(vec, 5) << std::endl;
	std::cout << "2: " << s.searchInsert(vec, 2) << std::endl;
	std::cout << "7: " << s.searchInsert(vec, 7) << std::endl;
	std::cout << "0: " << s.searchInsert(vec, 0) << std::endl;
}
