#include <stdio.h>

#include "JupiterApi.h"

int main()
{
    const char* str = "ABCABAABCABAC";
    const char* pattern = "CAB";

    printf("%s\n", version());
    printf("%s\n", kmpsearch(str, pattern));

    return 0;
}
