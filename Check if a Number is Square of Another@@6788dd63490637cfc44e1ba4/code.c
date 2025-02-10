#include <stdio.h>



int main() {
    int num1,num2,c;
    scanf("%d %d",&num1,&num2);
    c=num2*num2;
    if (c==num1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}