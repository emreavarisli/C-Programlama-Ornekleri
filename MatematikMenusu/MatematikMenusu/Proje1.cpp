#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14

int main(void) {

	int s1, s2, sonuc, sonucc, secim;
	float s3, s4, sonucf, sonucff;
	double s5, s6, sonucd, sonucdd;

	printf("********** MATEMATIK MENUSU **********");
	printf("\n--------------------------------------\n");
	printf("1. Toplama Islemi Icin.\n");
	printf("2. Carpma Islemi Icin.\n");
	printf("3. Cikarma Islemi Icin.\n");
	printf("4. Bolme Islemi Icin.\n");
	printf("5. Kare Bulmak Icin.\n");
	printf("6. Kup Hesabi Icin.\n");
	printf("7. Denklem (5x^2+4x+3) Cozmek Icin.\n");
	printf("8. Mutlak Deger Almak Icin.\n");
	printf("9. Logaritma Degeri Almak Icin.\n");
	printf("10. Uslu Sayi Islemleri Icin.\n");
	printf("11. Sayi Yuvarlama Islemi Icin.\n");
	printf("12. Kok Alma Islemi Icin.\n");
	printf("13. Sinus Islemi Icin.\n");
	printf("14. Cosinus Islemi Icin.\n");
	printf("15. Dairenin Cevre ve Alan Islemi Icin.\n");
	printf("16. Dikdortgenin Cevre ve Alan Islemi Icin.\n");

	printf("\n");

	printf("Islem Numaraniz: ");
	scanf_s("%d", &secim);

	switch (secim)
	{
	case 1:
		printf("Birinci Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		printf("Ikinci Sayiyi Giriniz: ");
		scanf_s("%d", &s2);
		sonuc = s1 + s2;
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 2:
		printf("Birinci Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		printf("Ikinci Sayiyi Giriniz: ");
		scanf_s("%d", &s2);
		sonuc = s1 * s2;
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 3:
		printf("Birinci Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		printf("Ikinci Sayiyi Giriniz: ");
		scanf_s("%d", &s2);
		sonuc = s1 - s2;
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 4:
		printf("Birinci Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		printf("Ikinci Sayiyi Giriniz: ");
		scanf_s("%d", &s2);
		sonucf = (float)s1 / s2;
		printf("Sonuc: %.4f", sonucf);
		break;
	}

	switch (secim)
	{
	case 5:
		printf("Karesi Alinacak Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		sonuc = s1 * s1;
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 6:
		printf("Kupu Alinacak Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		sonuc = s1 * s1 * s1;
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 7:
		printf("X Degerini Giriniz: ");
		scanf_s("%d", &s1);
		sonuc = ((5 * s1 * s1) + (4 * s1) + 3);
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 8:
		printf("Mutlak Degeri Alinacak Sayiyi Giriniz: ");
		scanf_s("%lf", &s5);
		sonucd = fabs(s5);
		printf("Sonuc: %.lf", sonucd);
		break;
	}

	switch (secim)
	{
	case 9:
		printf("Logaritmasi Alinacak Sayiyi Giriniz: ");
		scanf_s("%lf", &s5);
		sonucd = log(s5);
		printf("Sonuc: %.4lf", sonucd);
		break;
	}

	switch (secim)
	{
	case 10:
		printf("Tabandaki Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		printf("Usteki Sayiyi Giriniz: ");
		scanf_s("%d", &s2);
		sonuc = pow(s1, s2);
		printf("Sonuc: %d", sonuc);
		break;
	}

	switch (secim)
	{
	case 11:
		printf("Yuvarlanacak Sayiyi Giriniz: ");
		scanf_s("%lf", &s5);
		sonucd = floor(s5);
		printf("Alt Deger Icin Sonuc: %.f", sonucd);
		printf("\n");
		sonucdd = ceil(s5);
		printf("Ust Deger Icin Sonuc: %.f", sonucdd);
		break;
	}

	switch (secim)
	{
	case 12:
		printf("Kok Degeri Alinacak Sayiyi Giriniz: ");
		scanf_s("%d", &s1);
		sonucd = sqrt(s1);
		printf("Sonuc: %.4f", sonucd);
		break;
	}

	switch (secim)
	{
	case 13:
		printf("Sinusu Alinacak Sayiyi Giriniz: ");
		scanf_s("%lf", &s5);
		sonucd = sin(s5);
		printf("Sonuc: %.4lf", sonucd);
		break;
	}

	switch (secim)
	{
	case 14:
		printf("Cosinusu Alinacak Sayiyi Giriniz: ");
		scanf_s("%lf", &s5);
		sonucd = cos(s5);
		printf("Sonuc: %.4lf", sonucd);
		break;
	}

	switch (secim)
	{
	case 15:
		printf("Yaricap Giriniz: ");
		scanf_s("%f", &s3);
		sonucf = 2 * pi * s3;
		printf("Cevre: %.4f\n", sonucf);
		sonucff = pi * s3 * s3;
		printf("Alan: %.4f\n", sonucff);
		break;
	}

	switch (secim)
	{
	case 16:
		printf("Kisa Kenari Giriniz: ");
		scanf_s("%d", &s1);
		printf("Uzun Kenari Giriniz: ");
		scanf_s("%d", &s2);
		sonuc = s1 * s2;
		printf("Dikdortgen Alan: %d", sonuc);
		printf("\n");
		sonucc = s1 + s1 + s2 + s2;
		printf("Dikdortgen Cevre: %d", sonucc);
		break;
	}


	return 0;
}
