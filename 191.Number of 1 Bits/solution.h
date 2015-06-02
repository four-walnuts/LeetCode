typedef unsigned uint32_t;

class Solution
{
public:
	int hammingWeight(uint32_t n)
	{
		int rel = 0;
    		do
    		{
        		//if(n & 1)
            		rel+=(n & 1);
    		}while(n >>= 1);
    		return rel;
	}
};
