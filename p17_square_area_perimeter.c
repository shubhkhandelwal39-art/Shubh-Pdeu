// 17. Calculate area & perimeter of a square. A = L^2, P = 4L
#include <stdio.h>

int main(void) {
    double side;
    printf("Enter side length L: ");
    if (scanf("%lf", &side) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    double area = side * side;
    double perimeter = 4.0 * side;
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
