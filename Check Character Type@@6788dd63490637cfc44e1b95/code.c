#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    scanf("%c",c);
    if((c==("a"||"e"||"i"||"o"||"u"))){
        printf("Vowel"
        );

    }
    else{
        printf("Consonant");
    }
    return 0;

}