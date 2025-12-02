#include <stdio.h>

int main() {
    int n;

    printf("Enter marks: ");
    scanf("%d", &n);

    if(n > 60 && n <= 100)
        printf("First division\n");
    else if(n > 50 && n <= 60)
        printf("Second division\n");
    else if(n > 40 && n <= 50)
        printf("Third division\n");
    else
        printf("Fail\n");

    return 0;
}
