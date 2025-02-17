#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    while(n!=0){
        a = n % 10;
        a = a + n;
        n = n / 10;
    }
    printf("%d",a);
    return 0;
}