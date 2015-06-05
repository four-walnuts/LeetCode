#include <iostream>
#include "solution.h"

using std::cout;
using std::endl;

int main(void)
{
	Solution s;
	for(int i = 0; i != 4000; ++i)
	{
		cout << i << ": " << s.intToRoman(i) << endl;
	}
	return 0;
}
