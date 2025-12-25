#include <stdio.h>

int main()
{
    int i = 13;
    int *j = &i;
    printf("The value of i is %p\n", &i);
    printf("The value of i is %p\n", j);
    return 0;
}