#include <iostream>
#include "solution.h"

int main(void)
{
	std::string s1("AB");
	std::string s2("");
	Solution s;
	std::cout << s.titleToNumber(s1) << std::endl;
	std::cout << s.titleToNumber(s2) << std::endl;
	return 0;
}
