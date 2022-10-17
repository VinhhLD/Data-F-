/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int kiemtra (int x)
{
	if (x % 2 == 0)
		return 1;
	return 0;
}
int main ()
{
	int x;
	printf("Nhap so nguyen x: "); scanf_s("%d", &x);
	if (kiemtra(x))
	{
		printf("%d la so chan\n", x);
	}
	else
		printf("%d la so le\n", x);
	return 0;
	getch ();
}*/
