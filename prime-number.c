#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;

    int i = 2;
    while (i*i <= num) { // only search up to the square root of num
        if (num % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    int num;
    printf("Input a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is a not prime number\n", num);
    }

    return 0;
}
