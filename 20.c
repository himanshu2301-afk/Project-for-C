#include <stdio.h>


int main()
{
    int a, b, sum, sub, mul, div;

    printf("enter two numbers\n");

    scanf("%d", &a);
    printf("enter second number=\n");
    scanf("%d", &b);
    sum = a + b;
    printf("sum=%d\n", sum);
    sub = a - b;
    printf("sub=%d\n", sub);
    mul = a * b;
    printf("mul=%d\n", mul);
    div = a / b;
    printf("div=%d\n", div);
    return 0;
}
