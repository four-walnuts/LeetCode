#include <vector>

class Solution
{
public:
	int maxProfit(std::vector<int>& prices)
	{
		int buy = prices[0];
		int sell = prices[0];
		int profit = 0;
		for(auto it = prices.begin(); it != prices.end(); ++it)
		{
			if(*it > sell)
			{
				sell = *it;
			}
			else
			{
				profit += (sell - buy);
				sell = buy = *it;
			}
		}
		profit += (sell - buy);
		return profit;
	}
};
