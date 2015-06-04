#include <vector>
class Solution
{
public:
	int searchInsert(std::vector<int>& nums, int target)
	{
		if(nums.empty())
		{
			return 0;
		}
		int low = 0;
		int high = nums.size() - 1;
		int mid = 0;
		while(low <= high)
		{
			mid = (low + high) / 2;
			if(nums[mid] > target)
			{
				high = mid - 1;
			}
			else if(nums[mid] < target)
			{
				low = mid + 1;
			}
			else
			{
				return mid;
			}
		}
		return low;
	}
};
