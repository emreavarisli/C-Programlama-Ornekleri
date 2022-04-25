#include <stdio.h>
#include <stdlib.h>

//Girilen 3 basamaklý sayiyi tersine çeviren program.

int main() {

	int sayi;
	int d1, d2, d3;

	printf("Tersi Alinacak Sayiyi Giriniz: ");
	scanf_s("%d", &sayi);

	d1 = sayi / 100;
	d2 = sayi % 100 / 10;
	d3 = sayi % 10;

	printf("Girilen Sayiyin Tersi: %d%d%d\n", d3, d2, d1);

	/*
	printf("%d",d3);
	printf(" %d ",d2); //Alternaitf olarak böyle de yazdýrýlabilir.
	printf("%d",d1);
	*/

	return 0;
}