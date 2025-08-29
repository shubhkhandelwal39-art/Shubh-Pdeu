// 18. Calculate area & perimeter of a rectangle. A = L*B, P = 2(L+B)
#include <stdio.h>

int main(void) {
    double length, breadth;
    printf("Enter length L and breadth B: ");
    if (scanf("%lf %lf", &length, &breadth) != 2) {
        printf("Invalid input.\n");
        return 0;
    }
    double area = length * breadth;
    double perimeter = 2.0 * (length + breadth);
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
