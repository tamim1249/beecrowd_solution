#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check if all digits of a number are prime
int allDigitsPrime(int n) {
    int digit;
    while (n != 0) {
        digit = n % 10;
        if (!isPrime(digit)) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (isPrime(n) && allDigitsPrime(n)) {
            printf("Super\n");
        } else if (isPrime(n)) {
            printf("Primo\n");
        } else {
            printf("Nada\n");
        }
    }
    return 0;
}
