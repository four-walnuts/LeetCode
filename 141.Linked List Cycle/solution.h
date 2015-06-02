
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x): val(x), next(NULL) {}
};

class Solution
{
public:
	bool hasCycle(ListNode* head)
	{
		if(head == NULL)
		{
			return false;
		}
		ListNode* first = head;
		ListNode* second = head->next;
		while(second && second != first)
		{
			first = first->next;
			second = second->next;
			if(second)
			{
				second = second->next;
			}
		}
		if(second == NULL)
		{
			return false;
		}
		return true;
	}
};

/*

bool hasCycle(LinkNode* head)
{
	if(head && head-next)
	{
		for(ListNode* slower = head, * faster = head->next; faster && faster->next; slower = slower->next, faster = faster->next->next)
		{
			if(slower == faster)
			{
				return true;
			}
		}
	}
	return false;
}
*/
