#include <map>
#include <string>

using std::string;
using std::map;

class Solution
{
public:
	int romanToInt(string s)
	{
		int ret = 0;
		int flag = 0;
		for(auto r_it = s.rbegin(); r_it != s.rend(); ++r_it)
		{
			if(translate[*r_it] >= flag)
			{
				ret += translate[*r_it];
				flag = translate[*r_it];
			}
			else
			{
				ret -= translate[*r_it];
			}
		}
		return ret;
	}
private:
	static map<char, int> translate;
};

map<char, int> Solution::translate = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

