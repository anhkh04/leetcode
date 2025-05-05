#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int last;
    if (m > 0) last = nums1[m - 1];

    for (int i = 0, j = 0; j != n;)
    {
        if (nums1[i] <= nums2[j])
        {
            if (m == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    nums1[k] = nums2[k];
                }
                return;
            }
            else if (nums1[i] == last)
            {
                for (int k = m + j; k < nums1Size; k++, j++)
                {
                    nums1[k] = nums2[j];
                }
                return;
            }

            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            for (int k = m + j; k > i; k--)
            {
                nums1[k] = nums1[k - 1];
            }
            nums1[i] = nums2[j];
            j++;
        }
    }
    return;
}

int main()
{

    return 0;
}