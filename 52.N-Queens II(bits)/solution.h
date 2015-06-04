
class Solution {
public:
    	unsigned upperlim;
    	void dfs(unsigned row, unsigned ld, unsigned rd, int& ret)
    	{
        	if(row == upperlim)
        	{
            		++ret;
			return;	
        	}
		unsigned pos = (~(row | ld | rd)) & upperlim;
		unsigned p;
		while(pos)
		{
			p = pos & (~pos + 1);
			pos -= p;
			dfs(row | p, (ld | p) << 1, (rd | p) >> 1, ret);
		}
        	
	}
	int totalNQueens(int n) 
	{
		upperlim = (1 << n) - 1;
		int ret = 0;
		dfs(0, 0, 0, ret);
		return ret;
	}
};
/*
#include <functional>
class Solution
{
public:
	int totalNQueens(int n)
	{
		upperlim = (1 << n) - 1;
		int ret = 0;
		std::function<void(int, int, int)> dfs = [&](unsigned row, unsigned ld, unsigned rd)
		{
			if(row == upperlim)
			{
				++ret;
				return;
			}
			unsigned pos = upperlim & ~(row | ld | rd);
			unsigned p;
			while(pos)
			{
				p = pos & (~pos + 1);
				pos = pos - p;
				dfs(row | p, (ld | p) << 1, (rd | p) >> 1);
			}
		};
		dfs(0, 0, 0);
		return ret;
	}
private:
	unsigned upperlim;
};
*/
