#include <stdio.h>

int main () {
    float pi = 3.1415926;

    printf("%10s: %10.2f\n", "PI", pi);
    printf("%-10s: %10.2f\n", "PI", pi);
    printf("%10s: %10.2f\n", "PI", pi);

    return 0;
}
