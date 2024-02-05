
#include <stdio.h>

//Program that consider whether perfect number between 1-100.
int main() {
    int i, top = 0, y = 0;
    for (i = 0; i <= 98; i++) {
        top = top + (2 + i);
    }

    for (i = 1; i <= top / 2; i++) {
        if (top % i == 0) {
            y = y + i;
        }
        if (top == y) {
            printf("Perfect\n");
        }
        else {
            printf("Not Perfect\n");
        }

        return 0;
    }