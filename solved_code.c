#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int n);
int *getPrimes(int n);
int isPrime(int x);

int main(int argc, char **argv) {
    int n = 10;
    if (argc >= 2) {
        int tmp = atoi(argv[1]);
        if (tmp > 0) n = tmp;
    }

    int *primes = getPrimes(n);
    if (!primes) {
        fprintf(stderr, "Failed to allocate memory for primes\n");
        return 1;
    }
    int s = sum(primes, n);
    printf("The sum of first %d primes is %d\n", n, s);

    free(primes);
    return 0;
}

int sum(int *arr, int n) {
    int i, total = 0;
    for (i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int *getPrimes(int n) {
    int *result = malloc(n * sizeof(int));
    if (!result) return NULL;

    int count = 0;
    int x = 2;
    while (count < n) {
        if (isPrime(x)) {
            result[count] = x;
            count++;
        }
        x++;
    }
    return result;
}

int isPrime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    int limit = (int) sqrt((double)x);
    for (int i = 3; i <= limit; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}
