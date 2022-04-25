#include <stdio.h>
#include <stdlib.h>

//Sýcaklýk deðerini istenilen birime dönüþtüren program.

int main() {

	int islem;
	double c, f, k;

	printf("**SICAKLIK DONUSUMLERI**\n");
	printf("------------------------\n");

	printf("1- Celsius -> Fahrenheit\n");
	printf("2- Fahrenheit -> Celsius\n\n");
	printf("3- Celsius -> Kelvin\n");
	printf("4- Kelvin -> Celsius\n\n");
	printf("5- Fahrenheit -> Kelvin\n");
	printf("6- Kelvin -> Fahrenheit\n");

	printf("\nDonusum Numarasi Secin: ");
	scanf_s("%d", &islem);

	switch (islem)
	{
	case 1:
		printf("\nCelsius Degerini Giriniz: ");
		scanf_s("%lf", &c);
		f = c * 1.8 + 32;
		printf("Fahrenheit Degeri: %.3lf\n", f);
	}

	switch (islem)
	{
	case 2:
		printf("\nFahrenheit Degerini Giriniz: ");
		scanf_s("%lf", &f);
		c = (f - 32) / 1.8;
		printf("Celsius Degeri: %.3lf\n", c);
	}

	switch (islem)
	{
	case 3:
		printf("\nCelsius Degerini Giriniz: ");
		scanf_s("%lf", &c);
		k = c + 273.15;
		printf("Kelvin Degeri: %.3lf\n", k);
	}

	switch (islem)
	{
	case 4:
		printf("\nKelvin Degerini Giriniz: ");
		scanf_s("%lf", &k);
		c = k - 273.15;
		printf("Celsius Degeri: %.3lf\n", c);
	}

	switch (islem)
	{
	case 5:
		printf("\nFahrenheit Degerini Giriniz: ");
		scanf_s("%lf", &f);
		k = (f - 32) * 5 / 9 + 273.15;
		printf("Kelvin Degeri: %.3lf\n", k);
	}

	switch (islem)
	{
	case 6:
		printf("\nKelvin Degerini Giriniz: ");
		scanf_s("%lf", &k);
		f = (k - 273.15) * 1.8 + 32;
		printf("Fahrenheit Degeri: %.3lf\n", f);
	}

	return 0;
}