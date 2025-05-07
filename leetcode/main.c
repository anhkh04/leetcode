#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val)
{
	if (head == NULL)
	{
		return NULL;
	}

	while (head->val == val)
	{
		head = head->next;
		if (head == NULL)
		{
			return NULL;
		}
	}
	struct ListNode* curN = head;
	struct ListNode* nextN = head->next;

	while (nextN != NULL)
	{
		if (nextN->val != val)
		{
			curN->next = nextN;
			curN = nextN;
			nextN = curN->next;
		}
		else
		{
			nextN = nextN->next;
		}
	}
	curN->next = NULL;
	return head;
}

int main()
{

	return 0; 
}