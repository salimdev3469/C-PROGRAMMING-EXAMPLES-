
#include <stdio.h>


//Program that works until user enters zero, it takes numbers, computes average and sum of these numbers and print how many numbers entered.
int sayi = -1, s = 0, top = 0;
float ort;
int main() {
    while (sayi != 0) {
        printf("Input number: ");
        scanf_s("%d", &sayi);
        top = top + sayi;
        s++;
    }
    if (s == 1) {
        printf("You've made any input.\n");

    }
    else {
        ort = top / (s - 1);
        printf("%d numbers prompted...\n", s - 1);
        printf("Sum of numbers: %d \n", top);
        printf("Average : %f", ort);
    }
    return 0;
}