#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

typedef enum
{
	false, 
	true
} bool;

bool isIsomorphic(char* s, char* t)
{
	int sSize = strlen(s);
	int tSize = strlen(t);

	if (s == NULL || t == NULL || sSize != tSize)
	{
		return false;
	}

	char mark[127] = { 0 };

	for (int i = 0; i < sSize; i++)
	{
		if (mark[s[i]] == 0)
		{
			for (int j = 32; j < 126; j++)
			{
				if (t[i] == mark[j])
				{
					return false;
				}
			}
			mark[s[i]] = t[i];
		}
		else if (mark[s[i]] != t[i])
		{
			return false;
		}

	}
	return true;
}

int main()
{
	bool res = isIsomorphic("paper", "title"); 

	printf("%d", res); 
	return 0; 
}