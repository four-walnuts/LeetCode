#include <iostream>
#include "solution.h"

int main(void)
{
	uint32_t n1 = 0xdf;
	uint32_t n2 = 0x00;
	Solution s;
	std::cout << s.hammingWeight(n1) << std::endl;
	std::cout << s.hammingWeight(n2) << std::endl;
}
