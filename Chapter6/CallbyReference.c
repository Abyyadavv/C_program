#include <stdio.h>
int sum(int*,int* );
int sum(int *a , int *b){
    *a= 8;
    return (*a + *b);
}   
int main(){
    int x = 10,y = 20;
    printf("THe sum of 10 and 20 is %d\n", sum(&x,&y));
    printf("The value of x after function call is %d\n", x);
    return 0;
}