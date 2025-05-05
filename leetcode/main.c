#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

 struct ListNode {
    int val;
    struct ListNode *next;
 };

struct ListNode* deleteDuplicates(struct ListNode* head) {

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    while (head->val == head->next->val)
    {
        head = head->next;
        if (head->next == NULL)
        {
            return head;
        }
    }

    struct ListNode* curN = head->next;
    struct ListNode* nextN = curN->next;

    while (nextN != NULL)
    {
        if (curN->val != nextN->val)
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
    curN->next = nextN;

    return head;
}

int main()
{

    return 0;
}