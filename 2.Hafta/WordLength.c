
#include <stdio.h>


//Program that find the length of the entered word.
/*Aciklama:Bu soruda bir karakter dizisi tanimliyoruz.Kelimeyi de okutmak
için gets fonksiyonu kullaniyoruz.100 eleman tanimlamamizin sebebi dizi tanimlanirken dinamik dizi tanimlamadiğimizdan her zaman kaç elemanli oldugunu derleyiciye belirtmektir.Fakat C'de malloc fonksiyonu ile bilinmeyen sayida elemanlar için bellekten yer alabiliriz.Gets ile sisteme kelime okutursak son karakteri girdikten sonra dizinin sonuna kendine has bir işaret(\0) koyar, bu da bize dizinin sonunun geldiğini gösterir.*/

int main() {
char d[100];
int i=0;
gets(d);
for(i=0;i<100;i++){
    if(d[i]=='\0'){
        printf("%d",i);
        break;
    }
}
return 0;
}