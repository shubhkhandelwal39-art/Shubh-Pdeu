// 21. Calculate net salary.
// net salary = gross salary + allowance – deduction
// allowance = 10% of gross, deduction = 3% of gross
#include <stdio.h>

int main(void) {
    double gross;
    printf("Enter gross salary: ");
    if (scanf("%lf", &gross) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    double allowance = 0.10 * gross;
    double deduction = 0.03 * gross;
    double net = gross + allowance - deduction; // same as gross * 1.07
    printf("Allowance = %.2f\n", allowance);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net);
    return 0;
}
