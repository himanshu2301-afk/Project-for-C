#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1; i<=9; i++){
        for(k=0;k<=15-i;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
}
