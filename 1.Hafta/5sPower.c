
#include <stdio.h>

//Program that find whether 5's power the number entered by user.
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
dnz:
    if (num % 5 == 0) {
        num = num / 5;
        goto dnz;
    }
    if (num == 1) {
        printf("Its power of 5\n");
    }
    else {
        printf("Its not power of 5\n");
    }

    return 0;
}