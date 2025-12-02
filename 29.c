#include <stdio.h>

int main() {
    int arr[10], n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
