// 24. Swap two values.
#include <stdio.h>

int main(void) {
    double x, y, temp;
    printf("Enter two numbers (x y): ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 0;
    }
    printf("Before swap: x = %.2f, y = %.2f\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap:  x = %.2f, y = %.2f\n", x, y);
    return 0;
}
