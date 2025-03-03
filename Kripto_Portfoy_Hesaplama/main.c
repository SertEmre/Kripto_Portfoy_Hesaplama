#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KRIPTO 200

typedef struct {
char adi[20];
double miktar, fiyat;
} Kripto;

void portfoyGoster(Kripto portfoy[], int sayi) {
double toplamDeger = 0;
printf("\n ------Kripto Para Portfoyu------\n");

for (int i = 0; i < sayi; i++) {
double deger = portfoy[i].miktar * portfoy[i].fiyat;
printf("%s: %.2f adet x %.2f = %.2f \n", portfoy[i].adi, portfoy[i].miktar, portfoy[i].fiyat, deger);
toplamDeger += deger;
}
    printf("Toplam Portfoy Degeri: %.2f \n",toplamDeger);
}

int main() {
Kripto portfoy[MAX_KRIPTO];
int sayi = 0;
char secim;

do {
    if (sayi >= MAX_KRIPTO) {
        printf("Maksimum kripto para sayisina ulasildi!\n");
        break;
        }

printf("Kripto Para ismini Giriniz: ");
scanf("%s", portfoy[sayi].adi);
printf("Kripto Miktarini Giriniz: ");
scanf("%lf", &portfoy[sayi].miktar);
printf("Birim Fiyatini Giriniz: ");
scanf("%lf", &portfoy[sayi].fiyat);
    sayi++;
printf("Baska bir kripto eklemek istermisiniz? (E/H): ");
    scanf(" %c", &secim);

} while (secim == 'E' || secim == 'e');

portfoyGoster(portfoy, sayi);
return 0;
}
