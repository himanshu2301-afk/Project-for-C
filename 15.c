// wap to find 4 digit perfect square who's 1st two and last two digits are also perfect square .

#include <stdio.h>
#include <math.h>

int main() {
    int n, first2, last2;

    for (n = 1000; n <= 9999; n++) {

        int root = sqrt(n);
        if (root * root != n)   // check perfect square
            continue;

        first2 = n / 100;       // first two digits
        last2 = n % 100;        // last two digits

        int r1 = sqrt(first2);
        int r2 = sqrt(last2);

        if (r1 * r1 == first2 && r2 * r2 == last2)
            printf("%d\n", n);
    }

    return 0;
}
