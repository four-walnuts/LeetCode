#include <vector>
class Solution
{
public:
	int singleNumber(std::vector<int>& nums)
	{
		int rel = 0;
		for(auto it = nums.begin(); it != nums.end(); ++it)
		{
			rel ^= *it;
		}
		return rel;
	}
};
