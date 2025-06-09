#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;

    int sqrt_num = (int)sqrt(num);
    for (int i = 2; i <= sqrt_num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);

        if (is_prime(X)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}
