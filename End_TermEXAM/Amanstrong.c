
#include <stdio.h>
int main(){
    int n, sum=0, rem, t;
    scanf("%d",&n);
    t=n;
    while(n!=0){
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(sum==t) printf("Armstrong");
    else printf("Not Armstrong");
}