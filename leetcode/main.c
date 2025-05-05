#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef enum {
    false, 
    true
} bool;

 struct ListNode {
    int val;
    struct ListNode *next;
 };
 
bool hasCycle(struct ListNode* head)
{
    if (head == NULL)
    {
        return 0;
    }

    struct ListNode* a[10001] = { 0 };
    struct ListNode* curN = head;
    int index = 0;

    a[index] = curN;
    while (curN->next != NULL)
    {
        for (int i = 0; i < 10001; i++)
        {
            if (curN->next == a[i])
            {
                return 1;
            }
            else if (curN->next == NULL)
            {
                break;
            }
        }
        curN = curN->next;
        a[++index] = curN;
    }

    return 0;
}

int main()
{

    return 0;
}