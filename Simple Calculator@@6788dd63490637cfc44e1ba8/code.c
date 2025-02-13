#include <stdio.h>
int main(){
    int num1,num2;
    char sign;
    scanf("%d %d %c",&num1,&num2,&sign);
    switch(sign){
        case "+":
        int sum = num1 + num2;
        printf("%d",sum);
        break;
        case "-":
        int sub = num1 - num2;
        printf("%d",sub);
        break;
        case "*":
        int mul = num1 * num2;
        printf("%d",mul);
        break;
        case "/":
        int divide = num1 / num2;
        printf("%d",divide);
        break;
    }
    return 0;
}