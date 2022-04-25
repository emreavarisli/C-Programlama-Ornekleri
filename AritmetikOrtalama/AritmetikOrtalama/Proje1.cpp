#include <stdio.h>
#include <stdlib.h>

// Girilen n adet sayýnýn aritmetik sayýnýn aritmetik ortalamasýný bulan program.

int main() {

	int i, sayi;
	float toplam = 0, n;

	printf("Sayi Adedini Giriniz: ");
	scanf_s("%f", &n);
	printf("\n");

	for (i = 1; i <= n; i++)
	{
		printf("%d. Sayiyi Giriniz: ", i);
		scanf_s("%d", &sayi);

		toplam = toplam + i;
	}

	printf("\nAritmetik Ortalama: %.2f\n", toplam / n);

	return 0;
}