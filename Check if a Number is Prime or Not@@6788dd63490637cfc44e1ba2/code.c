#include <stdio.h>
#include <math.h>

int main() {
    int num;
    if (num==0 || num=1){
        printf("Not Prime");
    }

    for (int i=2; i<=sqrt(num);i++){
        if (num%i==0){
            printf("Not Prime");
            return 0;
        }

    }
        printf("Prime");
    return 0;
}