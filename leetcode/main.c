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
 
 struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
     if (headA == NULL || headB == NULL)
     {
         return NULL;
     }

     struct ListNode* curA = headA;
     struct ListNode* curB = headB;
     struct ListNode* a[20001] = { 0 };

     a[0] = curA;
     a[1] = curB;
     if (a[0] == a[1])
     {
         return a[0];
     }
     int index = 1;

     while (curA->next != NULL || curB->next != NULL)
     {
         if (curA->next != NULL)
         {
             for (int i = 0; i < 20001; i++)
             {
                 if (curA->next == a[i])
                 {
                     return curA->next;
                 }
             }
             curA = curA->next;
             a[++index] = curA;
         }

         if (curB->next != NULL)
         {
             for (int i = 0; i < 20001; i++)
             {
                 if (curB->next == a[i])
                 {
                     return curB->next;
                 }
             }
             curB = curB->next;
             a[++index] = curB;
         }

     }

     return NULL;
 }

int main()
{

    return 0;
}