#include <stdio.h>

int main(){
    int side1,side2,side3;
    scanf("%d %d %d",side1,side2,side3);
    if((side1+side3>side2)||(side1+side2>side3)||(side3+side2>side1)){
        printf("Valid");
        return 0;
    }
    else{
        printf("Invalid");
        return 0;
    }
    return 0;
}