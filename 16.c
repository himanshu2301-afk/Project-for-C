#include <stdio.h>
int main(){
    float bs,hra,da,gs;
    printf("enter basic salary\n");
    scanf("%f",&bs);
    if(bs>20000)
    {
    hra=25;
        da=50;}
   else{
   hra=15; 
    da=30;}
    gs=bs+bs*hra/100+bs*da/100;
    printf("%f",gs);
    return 0;
}