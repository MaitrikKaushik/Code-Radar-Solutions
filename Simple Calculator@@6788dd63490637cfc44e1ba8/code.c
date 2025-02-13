#include <stdio.h>
int main(){
    int num1,num2;
    char sign;
    scanf("%d %d %c",&num1,&num2,&sign);
    int sum,sub,mul,divide;
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    divide = num1 / num2;
    switch(sign){
        case '+':
        printf("%d",sum);
        break;
        case '-':
        
        printf("%d",sub);
        break;
        case '*':
        
        printf("%d",mul);
        break;
        case '/':
        
        printf("%d",divide);
        break;
        default:
        printf("error");
    }
    return 0;
}