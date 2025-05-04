#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {

    int mark[102] = { 0 };
    int index = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            mark[index] = nums[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        nums[i] = mark[i];
    }

    return index;
}

int main()
{
    int arr[] = { 0, 0, 1, 1, 1, 2, 3, 3, 4 };
    int k = removeElement(arr, 9, 1);

    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}