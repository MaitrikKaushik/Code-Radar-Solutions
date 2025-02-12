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
    
    scanf("%d", &num);

    if (num < 2) 
        printf("Not Prime");
    else if (isPrime(num, num / 2)) 
        printf("Prime");
    else 
        printf("Not Prime");

    return 0;
}
