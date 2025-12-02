#include <stdio.h>
int main(){
    char character;
    printf("enter the character\n");
    scanf("%c",&character);
    if(( character>='A'&& character<='Z')||(character>='a'&& character<='z'))
    printf("alphabet\n");
    else
    printf("not an alphabet\n");
}