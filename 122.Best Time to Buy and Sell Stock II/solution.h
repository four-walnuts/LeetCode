#include <vector>

class Solution
{
public:
	int maxProfit(std::vector<int>& prices)
	{
		if(prices.begin() == prices.end())
		{
			return 0;
		}
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
/*
int maxProfit(std::vector<int>& prices)
{
	if(prices.size() == 0)
	{
		return 0;
	}
	int profit = 0;
	for(auto it = prices.begin() + 1; it != prices.end(); ++it)
	{
		if(*it > *(it - 1))
		{
			profit += (*it - *(it - 1));
		}
	}
	return profit;
}

*/
