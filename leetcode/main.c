#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
	int** arr = malloc(sizeof(int*) * numRows);
	*returnColumnSizes = malloc(sizeof(int) * numRows);

	for (int i = 0; i < numRows; i++)
	{
		(*returnColumnSizes)[i] = i + 1;
		arr[i] = malloc(sizeof(int) * (i + 1));
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}

	*returnSize = numRows;
	return arr;
}

int main()
{

    return 0;
}