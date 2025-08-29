// 20. Calculate area of a triangle. A = H * L / 2  (H = height, L = base)
#include <stdio.h>

int main(void) {
    double height, base;
    printf("Enter height H and base L: ");
    if (scanf("%lf %lf", &height, &base) != 2) {
        printf("Invalid input.\n");
        return 0;
    }
    double area = (height * base) / 2.0;
    printf("Area = %.2f\n", area);
    return 0;
}
