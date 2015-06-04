#include <vector>

// recursion

class Solution
{
private:
	int ret;
	int len;
	std::vector<int> path;
	bool canPlace(int row, int cos)
	{
		for(int i = 0; i < row; ++i)
		{
			if(path[i] == cos || (abs(path[i] - cos) == abs(i - row)))
			{
				return false;
			}
		}
		return true;
	}
	void solveNQueen(int row)
	{
		if(len == row)
		{
			ret++;
			path.pop_back();
		}
		else
		{
			for(int cos = 0; cos < len; ++cos)
			{
				if(canPlace(row, cos))
				{
					path.push_back(cos);
					solveNQueen(row + 1);
				}
			}
			path.pop_back();
		}
	}
public:
	int totalNQueens(int n)
	{
		len = n;
		ret = 0;
		solveNQueen(0);
		return ret;
	}
};
