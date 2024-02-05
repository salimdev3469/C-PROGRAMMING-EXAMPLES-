
#include <stdio.h>

//Program that consider abundant or deficient the number entered by user.
int main() {
    int num, bolen = 1, counter = 2;
    scanf("%d", &num);
    while (num <= (num / 2)) {
        if (num % counter == 0) {
            bolen = bolen + counter;
            counter++;
        }
        if (bolen > num) {
            printf("Abondant Number\n");
        }
        else {
            printf("Deficient Number\n");
        }
        return 0;
    }