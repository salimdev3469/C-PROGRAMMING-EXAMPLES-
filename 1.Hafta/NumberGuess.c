#include <stdio.h>

//Program that find the number we guess between 1-63 at most 6 try.
int main() {
    int alt = 1, ust = 63, tahmin, sayac = 0;
    int randomNumber();
    srand(time(0));
    int tutulan = (rand() % 63) + 1;
dnz:
    tahmin = (alt + ust) / 2;
    sayac++;
    if (tahmin == tutulan) {
        printft("Tutulan:%d sayac %d", tutulan, sayac);

    }
    else {
        if (tahmin > tutulan) {
            ust = tahmin;
        }
        else {
            alt = tahmin;
            goto dnz;
        }
    }


    return 0;
}