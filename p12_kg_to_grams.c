// 12. Convert kilograms into grams.
#include <stdio.h>

int main(void) {
    double kilograms, grams;
    printf("Enter kilograms: ");
    if (scanf("%lf", &kilograms) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    grams = kilograms * 1000.0;
    printf("Grams = %.0f\n", grams);
    return 0;
}
