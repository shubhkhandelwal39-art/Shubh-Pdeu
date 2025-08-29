// 16. Calculate simple interest where I = P * R * N / 100.
#include <stdio.h>

int main(void) {
    double principal, rate, years, interest;
    printf("Enter Principal (P), Rate (R in %), Time (N in years): ");
    if (scanf("%lf %lf %lf", &principal, &rate, &years) != 3) {
        printf("Invalid input.\n");
        return 0;
    }
    interest = (principal * rate * years) / 100.0;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}
