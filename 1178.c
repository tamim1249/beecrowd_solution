#include <stdio.h>

int main() {
    double x, n[100];
    int i;
    scanf("%lf", &x);
    n[0] = x;
    printf("N[0] = %.4lf\n", n[0]);
    for (i = 1; i < 100; i++) {
        n[i] = n[i-1] / 2.0;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
    return 0;
}
