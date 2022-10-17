/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void Mnhonhat (long n)
{
	long m = 0;
	long s = 0;
	while (s < n)
	{
		m++;
		s = s + m;
	}
	printf("So M nho nhat la: %ld\n",  m);
}
int main ()
{
	long n;
	printf("Nhap n: "); scanf_s("%ld", &n);
	printf("Tinh M lon nhat sao cho: 1 + 2 + 3 + ... + m > n\n");
	Mnhonhat(n);
	return 0;
	getch ();
}*/