#include<stdio.h>
int main(){
    int price=100;
    int*x=&price;
    int**y=&x;

    printf("**y:%d",**y);
    return 0;
}