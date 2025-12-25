#include <stdio.h>
int sum(int a, int b)
{
    printf("Calculating sum of %d and %d\n", a, b);
    return a + b;
}
int main(){
    int a=1;
    int b=2;
    int result = sum(a, b);
    
    return 0;
} 