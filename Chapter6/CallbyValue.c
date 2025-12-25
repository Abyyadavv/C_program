#include <stdio.h>
int sum(int,int );
int sum(int a , int b){
    return a + b;
}   
int main(){
    int x = 10,y = 20;
    printf ("THe sum of 10 and 20 is %d\n", sum(x,y));    
    return 0;
}