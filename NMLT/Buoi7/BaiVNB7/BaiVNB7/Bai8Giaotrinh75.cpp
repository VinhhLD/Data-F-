/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void docso (long n)
{
	long a = n % 10;
	long b = (n / 10) % 10;
	if (b % 10 == 0 && a != 0)
	{
		printf("le ");
	}
}
int main ()
{
	long n;
	do
	{
	printf("Nhap n (0 < n < 1000): "); scanf_s("%ld", &n);
	}
	while (n < 0 && n > 1000);
	long a = n % 10;
	long b = (n / 10) % 10;
	long c = (n / 100) % 10;
	switch (c)
	{
		case 1: printf("Mot tram ");break;
		case 2: printf("Hai tram ");break;
		case 3: printf("Ba tram ");break;
		case 4: printf("Bon tram ");break;
		case 5: printf("Nam tram ");break;
		case 6: printf("Sau tram ");break;
		case 7: printf("Bay tram ");break;
		case 8: printf("Tam tram ");break;
		case 9: printf("Chin tram ");break;
	}
	docso(n);
	switch (b)
	{
		case 1: printf("muoi ");break;
		case 2: printf("hai muoi ");break;
		case 3: printf("ba muoi ");break;
		case 4: printf("bon muoi ");break;
		case 5: printf("nam muoi ");break;
		case 6: printf("sau muoi ");break;
		case 7: printf("bay muoi ");break;
		case 8: printf("tam muoi ");break;
		case 9: printf("chin muoi ");break;
    }
	switch (a)
	{
		case 1: printf("mot ");break;
		case 2: printf("hai ");break;
		case 3: printf("ba ");break;
		case 4: printf("bon ");break;
		case 5: printf("lam ");break;
		case 6: printf("sau ");break;
		case 7: printf("bay ");break;
		case 8: printf("tam ");break;
		case 9: printf("chin ");break;
	}
	printf("\n");
	return 0;
	getch ();
}*/