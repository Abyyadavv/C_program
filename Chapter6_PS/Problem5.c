#include <stdio.h>

 int* sum(int a, int b)
{
    int s= a + b;
    printf("The sum is %d\n", a + b);
}
int* average(int a, int b)
{
    float avg = (a + b) / 2.0;
    printf("The average is %d\n", (a + b) / 2.0);
}
int main()
{
    int x = 20;
    int y = 40;
    sum(x, y);
    average(x, y);

    printf("The address of sum is &u and of average is %u".\n);
    return 0;
}