#include <vector>
#include <set>
class Solution
{
public:
	bool containsDuplicate(std::vector<int>& nums)
	{
		return nums.size() > std::set<int>(nums.begin(), nums.end()).size();
	}
};
/*
answer2:
bool containsDuplicate(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());
	int size = nums.size();
	for(int i = 1; i < size(); ++i)
	{
		if(nums[i] == nums[i - 1])
		{
			return true;
		}
	}
	return false;
}
*/
