#include <iostream>
#include "solution.h"

using std::cout;
using std::endl;

int main(void)
{
	string s1;	//0
	string s2("I");	//1
	string s3("MCDXLIV");	//1444
	string s4("MMMCMXCIX");	//3999
	Solution s;
	
	cout << s.romanToInt(s1) << endl;
	cout << s.romanToInt(s2) << endl;
	cout << s.romanToInt(s3) << endl;
	cout << s.romanToInt(s4) << endl;	

	return 0;
}
