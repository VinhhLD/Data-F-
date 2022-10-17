/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int nam;
	printf("Nhap nam: "); scanf_s("%d", &nam);
	if (nam % 4 == 0 && nam % 100 != 0 && nam % 400 == 0)
		printf("%d la nam nhuan\n", nam);
	else
		printf("%d khong phai la nam nhuan\n", nam);
	return 0;
	getch ();
}*/