// 19. Calculate area of a circle. A = 22/7 * R * R
#include <stdio.h>

int main(void) {
    double radius;
    printf("Enter radius R: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    double area = (22.0 / 7.0) * radius * radius; // as per problem statement
    printf("Area = %.2f\n", area);
    return 0;
}
