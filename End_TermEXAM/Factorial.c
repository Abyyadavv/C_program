#include <stdio.h>
long factorial(int n){
    long f = 1;
    for(int i=1;i<=n;i++) f*=i;
    return f;  
}
int main(){

    int n; scanf("%d",&n);
    printf(" The FActorial is %ld", factorial(n));
}
