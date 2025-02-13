#include <stdio.h>
#include <ctype.h>

int main() {
    char ad;
    scanf("%c", &ad);

    if (isdigit(ad)) {
        printf("Digit\n");
    } 
    else if (isalpha(ad)) {
        ad = tolower(ad); 
        if (ad == 'a' || ad == 'e' || ad == 'i' || ad == 'o' || ad == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    else {
        printf("Special Character\n");
    }

    return 0;
}