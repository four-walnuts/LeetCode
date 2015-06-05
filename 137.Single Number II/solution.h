/*
Given an array of integers, every element appears three times except for one. Find that single one.

Note:
	Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/

#include <vector>

using std::vector;

class Solution
{
public:
	int singleNumber(vector<int>& nums)
	{
		int ret = 0;
		for(int i = 0; i < 32; ++i)
		{
			int bit = 0;
			for(int j = 0; j != nums.size(); ++j)
			{
				bit += (1 & (nums[j] >> i));
			}
			ret |= (bit % 3) << i;
		}
		return ret;
	}
};
