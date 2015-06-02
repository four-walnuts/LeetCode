#include <string>

class Solution
{
public:
	int titleToNumber(std::string s)
	{
		int ret = 0;
		for(auto it = s.begin(); it != s.end(); ++it)
		{
			ret = ret * 26 + (*it - 'A' + 1);
		}
		return ret;
	}
};
