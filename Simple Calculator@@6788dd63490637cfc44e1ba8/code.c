#include <stdio.h>

int main() {
    int num1, num2;
    char sign;
    
    // Fix: Add a space before %c to avoid input issues
    scanf("%d %d %c", &num1, &num2, &sign);

    switch (sign) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("error");
            } else {
                printf("%d", num1 / num2);
            }
            break;
        default:
            printf("error");
    }
    
    return 0;
}
