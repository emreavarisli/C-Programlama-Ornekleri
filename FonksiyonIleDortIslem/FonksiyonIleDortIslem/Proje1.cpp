#include <stdio.h>
#include <conio.h>

void toplam(double sayi1, double sayi2)
{
	printf("Sonuc: %.2f\n", sayi1 + sayi2);
}

void cikarma(double sayi1, double sayi2)
{
	printf("Sonuc: %.2f\n", sayi1 - sayi2);
}

void carpma(double sayi1, double sayi2)
{
	printf("Sonuc: %.2f\n", sayi1 * sayi2);
}

void bolme(double sayi1, double sayi2)
{
	printf("Sonuc: %.2f\n", sayi1 / sayi2);
}

int main() {

	double sayi1, sayi2;
	int secim;

	printf("***MENU***\n");
	printf("----------\n");
	printf("1. Toplama\n");
	printf("2. Cikarma\n");
	printf("3. Carpma\n");
	printf("4. Bolme\n");

	printf("Yapmak Istediginiz Islem Numarasini Giriniz: ");
	scanf_s("%d", &secim);

	if (secim < 5 && secim > 0)
	{
		printf("Birinci Sayi Giriniz: ");
		scanf_s("%lf", &sayi1);

		printf("Ikinci Sayi Giriniz: ");
		scanf_s("%lf", &sayi2);

		switch (secim)
		{
		case 1:
			toplam(sayi1, sayi2);
			break;
		case 2:
			cikarma(sayi1, sayi2);
			break;
		case 3:
			carpma(sayi1, sayi2);
			break;
		case 4:
			bolme(sayi1, sayi2);
			break;
		}
	}
	else
		printf("Hata");
	
	return 0;
}