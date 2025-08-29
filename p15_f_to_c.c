// 15. Convert Fahrenheit into Celsius. C = 5/9 * (F – 32)
#include <stdio.h>

int main(void) {
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("Celsius = %.2f\n", celsius);
    return 0;
}
