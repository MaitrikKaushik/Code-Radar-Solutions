#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("28");
    }
    else if(a%2==0 && a<=7){
        printf("30");
    }
    else if(a%2!=0 && a>7){
        printf("30");
    }
    else if(a<=12){
        printf("31");
    }
    else{
        printf("Invalid month")
    }
    return 0;

}