#include <stdio.h>
#include <time.h>

int divisors(long long n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) 
            count++;
    }

    return count;
}

int main() {

    clock_t start = clock();

    int num;
    printf("Enter a num: ");
    scanf("%i", &num);

    printf("This num has %i divisors.\n", divisors(num));


    clock_t end = clock();
    double time = ((double)(end - start)) / CLOCKS_PER_SEC;    
    printf("Execution time: %lf\n", time);

    return 0;
}