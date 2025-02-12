#include <stdio.h>

int isPrime(int n, int divisor) {
    if (divisor == 1) 
        return 1;  // Base case: Prime number
    if (n % divisor == 0) 
        return 0;  // Not a prime number
    return isPrime(n, divisor - 1);  // Recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) 
        printf("%d is not a prime number.\n", num);
    else if (isPrime(num, num / 2)) 
        printf("%d is a prime number.\n", num);
    else 
        printf("%d is not a prime number.\n", num);

    return 0;
}
