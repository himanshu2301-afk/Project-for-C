#include <stdio.h>

int main() {
    float bill, final_bill;

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    if(bill > 1000) {
        final_bill = bill - (bill * 0.10);  // 10% discount
    }
    else {
        final_bill = bill;
    }

    printf("Final Bill = %.2f", final_bill);

    return 0;
}
