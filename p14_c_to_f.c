// 14. Convert Celsius into Fahrenheit. F = (9/5 * C) + 32
#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}
