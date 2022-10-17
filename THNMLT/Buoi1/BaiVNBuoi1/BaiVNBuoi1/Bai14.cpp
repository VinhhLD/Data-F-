/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a, b, c;
	printf("Nhap vao do dai canh a: "); scanf_s("%d", &a);
	printf("Nhap vao do dai canh b: "); scanf_s("%d", &b);
	printf("Nhap vao do dai canh c: "); scanf_s("%d", &c);
	if (a < b + c && b < a + c && c < a + b)
	{
		printf("-Day la 3 canh cua mot tam giac!\n");
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			printf("-Day la tam giac vuong\n");
		else if (a == b && b == c)
			printf("-Day la tam giac deu\n");
		else if (a == b || a == c || b == c)
			printf("-Day la tam giac can\n");
		else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
			printf("-Day la tam giac tu\n");
		else
			printf("-Day la tam giac nhon\n");
	}
	else
		printf("-Ba canh a, b, c khong phai la ba canh cua mot tam giac!\n");
	return 0;
	getch ();
}*/