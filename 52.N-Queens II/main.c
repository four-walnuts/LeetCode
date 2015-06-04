#include <iostream>
#include "solution.h"

int main(void)
{
	
	for(int i = 0; i < 20; ++i)
	{
		Solution s;
		std::cout << i << ": " << s.totalNQueens(i) << std::endl;
	}
	return 0;
	
}
