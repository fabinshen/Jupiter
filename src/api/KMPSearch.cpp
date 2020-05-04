#include "JupiterApi.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PATTERN_LEN 256

// Function to implement KMP algorithm
const char* kmpsearch(const char* str, const char* pattern)
{
    const char* pResult = NULL;
    int m = 0;
    int n = 0;
    int next[MAX_PATTERN_LEN];
    int *pNext = next;
    
    if (str == NULL || pattern == NULL)
        return NULL;

    m = strlen(str);
    n = strlen(pattern);

	if (m == 0 && n == 0)
        return str;

	if (n > m)
        return NULL;

	// In most cases, pattern won't be very long, pNext points to next array.
	// In case of pattern is too long, a block of memory is allocated.
    if (n + 1 > MAX_PATTERN_LEN)
        pNext = (int *)malloc(sizeof(int) * (n + 1));
    

	// Create KMP table
	for (int i = 0; i < n + 1; i++)
		pNext[i] = 0;

	for (int i = 1; i < n; i++)
	{
		int j = pNext[i + 1];

		while (j > 0 && pattern[j] != pattern[i])
			j = pNext[j];

		if (j > 0 || pattern[j] == pattern[i])
			pNext[i + 1] = j + 1;
	}

	for (int i = 0, j = 0; i < m; i++)
	{
		if (*(str + i) == *(pattern + j))
		{
			if (++j == n)
            {
                pResult = &str[i - j + 1];
                break;
            }
		}
		else if (j > 0)
        {
			j = pNext[j];
			i--;	// i will be incremented in next iteration.
		}
	}

	// free memory if allocated.
    if (pNext != next)
        free(pNext);

    return pResult;
}