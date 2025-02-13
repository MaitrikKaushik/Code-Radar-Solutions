#include <stdio.h>
int main(){
    int num1,num2;
    char sign;
    scanf("%d %d %c",&num1,&num2,&sign);
    int sum,sub,mul,divide;
    switch(sign){
        case '+':
        sum = num1 + num2;
        printf("%d",sum);
        break;
        case '-':
        sub = num1 - num2;
        printf("%d",sub);
        break;
        case '*':
        mul = num1 * num2;
        printf("%d",mul);
        break;
        case '/':
        divide = num1 / num2;
        printf("%d",divide);
        break;
    }
    return 0;
}