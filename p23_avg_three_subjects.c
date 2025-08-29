// 23. Calculate average of three subjects along with their total.
#include <stdio.h>

int main(void) {
    double s1, s2, s3;
    printf("Enter marks for three subjects (s1 s2 s3): ");
    if (scanf("%lf %lf %lf", &s1, &s2, &s3) != 3) {
        printf("Invalid input.\n");
        return 0;
    }
    double total = s1 + s2 + s3;
    double average = total / 3.0;
    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);
    return 0;
}
