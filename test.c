#include <stdio.h>

int main ()
{
    int i = 13, j;
    j = i++;
    printf("i=%d, j=%d", i, j);
    return 0;
}