#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {

    int i = 0;
    for (int j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    int arr[] = { 0, 0, 1, 1, 1, 2, 3, 3, 4 };
    int k = removeDuplicates(arr, 9);

    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}