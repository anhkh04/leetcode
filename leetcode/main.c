#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int maxProfit(int* prices, int pricesSize) {
    int max = 0, min = 10000;
    for (int i = 0; i < pricesSize; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
            for (int j = i + 1; j < pricesSize; j++)
            {
                if (prices[j] - min > max)
                {
                    max = prices[j] - min;
                }
            }
        }
    }
    return max;
}

int main()
{

    return 0;
}