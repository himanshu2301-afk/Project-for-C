#include <stdio.h>

int main(){
    int n, digit, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // preserve original number

    while(temp > 0){
        digit = temp % 10;        // last digit
        sum += digit * digit * digit;  // cube of digit
        temp = temp / 10;         // remove last digit
    }

    if(sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
