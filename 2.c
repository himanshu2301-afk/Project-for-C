#include<stdio.h>
void check(a);
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    check(a);
    return 0;
}

void check(a){
    if(a%2==0)
    printf("number is even:");
    else
    printf("number is odd:");
}
