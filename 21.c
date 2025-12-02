

#include <stdio.h>
void armstrong(int a);

int main(){
int a;
printf("Check Armstrong numbers up to: ");
    scanf("%d",&a);
armstrong(a);
return 0;
}

void armstrong(int a){
int sum,b,i,x;
for(i=1;i<=a;i++){
b=i;
sum=0;
while (b>0){
x=b%10;
sum+=x*x*x;
b=b/10;
    
}
    
if(sum==i)
printf("%d\n",i);
}
}