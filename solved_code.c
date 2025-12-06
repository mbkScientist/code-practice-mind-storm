#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Return 1 if x is prime, else 0 */
int isPrime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    int limit = (int)sqrt((double)x);
    for (int i = 3; i <= limit; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char **argv) {
    int n = 10;  /* default if no argument given */
    if (argc >= 2) {
        int tmp = atoi(argv[1]);
        if (tmp > 0) n = tmp;
    }

    int count = 0;
    int x = 2;
    long sum = 0;

    while (count < n) {
        if (isPrime(x)) {
            sum += x;
            count++;
        }
        x++;
    }

    printf("Sum of first %d primes = %ld\n", n, sum);
    return 0;
}
