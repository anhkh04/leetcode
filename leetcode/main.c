#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL)
	{
		return NULL; 
	}
	else if (head->next == NULL)
	{
		return head; 
	}

	struct ListNode* curN = head; 
	struct ListNode* nextN = curN->next; 
	curN->next = NULL; 

	while (nextN != NULL)
	{
		struct ListNode* tmpN = nextN->next;
		nextN->next = curN; 
		curN = nextN;
		nextN = tmpN; 
	}

	return curN; 
}

int main()
{

	return 0; 
}