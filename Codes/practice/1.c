#include<stdio.h>

int main() {
    int n,sum;
    printf("enter the number whose sum you want\n");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("the sum is %d",sum);
    return 0 ;
}