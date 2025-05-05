#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


 struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };
 
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL)
    {
        return true;
    }
    else if (p == NULL || q == NULL || p->val != q->val)
    {
        return false;
    }

    if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
    {
        return true;
    }
    return false;
}

int main()
{

    return 0;
}