#include<stdio.h>

int main() {
    char *p = "codingclubindia";
    char c;
    int i;
    for(i=0;i<3;i++){
        c=*p++;
    }
    printf("%c",c);
    return 0 ;
}