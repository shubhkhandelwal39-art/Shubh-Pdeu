// 13. Convert bytes into KB, MB and GB (using 1024 as base).
#include <stdio.h>

int main(void) {
    double bytes;
    printf("Enter bytes: ");
    if (scanf("%lf", &bytes) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    double kb = bytes / 1024.0;
    double mb = kb / 1024.0;
    double gb = mb / 1024.0;

    printf("KB = %.2f\n", kb);
    printf("MB = %.2f\n", mb);
    printf("GB = %.2f\n", gb);
    return 0;
}
