#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = & i;
    printf("THe adddres of i is %u\n", &i);
    printf("THe VAlue of i is %u\n", *ptr);

    return 0;
}