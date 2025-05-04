#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
 
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    if (list1 == NULL && list2 == NULL)
    {
        return NULL;
    }
    else if (list1 == NULL && list2 != NULL)
    {
        return list2;
    }
    else if (list1 != NULL && list2 == NULL)
    {
        return list1;
    }

    struct ListNode* curNode, * nextNode, * tmpNode, * head;

    if (list1->val <= list2->val)
    {
        curNode = list1;
        nextNode = list2;
    }
    else
    {
        curNode = list2;
        nextNode = list1;
    }
    head = curNode;
    while (1)
    {
        if (curNode->next == 0)
        {
            curNode->next = nextNode;
            curNode = nextNode;
            nextNode = nextNode->next;
            break;
        }
        else if (curNode->next->val > nextNode->val)
        {
            tmpNode = curNode->next;
            curNode->next = nextNode;
            curNode = nextNode;
            nextNode = tmpNode;
        }
        else
        {
            curNode = curNode->next;
        }
    }

    return head;
}
int main()
{

    return 0;
}