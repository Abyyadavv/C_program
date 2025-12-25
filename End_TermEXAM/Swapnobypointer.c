#include <stdio.h>
void swap(int *x, int *y)
{
    int t = *x; // 1. Store the value at address x in a temp variable
    *x = *y;    // 2. Copy the value at address y to address x
    *y = t;     // 3. Copy the temp value to address y
}
int main()
{
    int a, b;
    printf("Enter two numbers: "); 
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("Swapped values: %d %d", a, b);
    return 0;
}