/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	float a, b, c, x1, x2, z;
	do
	{
	printf("Nhap he so a (a != 0): "); scanf_s("%f", &a);
	printf("Nhap he so b: "); scanf_s("%f", &b);
	printf("Nhap he so c: "); scanf_s("%f", &c);
	}
	while (!a);
	printf("Phuong trinh bac 2: %.0fx^2 + (%.0fx) + (%.0f) = 0", a, b, c);
	float delta = pow(b, 2) - (4*a*c);
	if (delta < 0)
	{
		printf("\n=> Phuong trinh vo nghiem\n");
		return 0;
	}
	else 
		if (delta == 0)
		{
			x1 = x2 = -b / (2*a);
			printf("\n=> Phuong trinh co nghiem kep: \n\t=> x1 = %.4f, x2 = %.4f\n", x1, x2);
			return 1;
		}
	else
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("\n=> Phuong trinh co 2 nghiem phan biet: \n\t=> x1 = %.4f, x2 = %.4f\n", x1, x2);
		return 2;
	}
	return 3;
	getch ();
}*/