
#include <stdio.h>


//Program that reverses the word that defined into system word by word.

int main() {
    int i, j = 0, k = 0;
    char d[10] = { 'B','i','l','g','i','s','a','y','a','r' };
dmg:
    for (i = j; i < 10; i++) {
        printf("%c", d[i]);
    }
    while (k < j) {
        printf("%c", d[k]);
        k++;
    }
    if (j != 9) {
        k = 0;
        printf("\n");
        j++;
        goto dmg;
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("%c", d[i]);
    }
    return 0;
}