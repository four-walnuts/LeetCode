#include <map>
#include <string>

using std::map;
using std::string;

class Solution
{
public:
	string intToRoman(int num)
	{
		string ret;
		for(auto r_it = translate.rbegin(); num; ++r_it)
		{
			while(num >= (*r_it).first)
			{
				ret += (*r_it).second;
				num -= (*r_it).first;
			}
		}
		return ret;
	}
private:
	static map<int, string> translate;
};

map<int, string> Solution::translate = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
