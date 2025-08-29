// 22. Calculate net sales.
// net sales = gross sales – 10% discount of gross sales
#include <stdio.h>

int main(void) {
    double gross;
    printf("Enter gross sales: ");
    if (scanf("%lf", &gross) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    double discount = 0.10 * gross;
    double net = gross - discount;
    printf("Discount = %.2f\n", discount);
    printf("Net Sales = %.2f\n", net);
    return 0;
}
