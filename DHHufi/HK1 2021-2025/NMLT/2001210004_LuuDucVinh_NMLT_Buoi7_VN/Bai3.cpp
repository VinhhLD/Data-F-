/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
float kiemtra(float a, float b)
{
	if (a == 0)
	{
		if (b == 0)
			printf("Phuong trinh co vo so nghiem\n");
		else
			printf("Phuong trinh vo nghiem\n");
	}
	else
		printf("Phuong trinh co nghiem x = %.2f\n", -b / a);
	return 1;
}
int main ()
{
	float a, b;
	printf("Nhap he so a: "); scanf_s("%f", &a);
	printf("Nhap he so b: "); scanf_s("%f", &b);
	kiemtra(a,b);
	return 0;
	getch ();
}*/

