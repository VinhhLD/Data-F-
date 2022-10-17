/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float a, b, tong, hieu, tich, thuong;
	printf("Nhap a: "); scanf_s("%f", &a);
	printf("Nhap b: "); scanf_s("%f", &b);
	char pheptoan;
	printf("Nhap vao phep toan ban muon tinh: "); scanf_s("%c", &pheptoan);
	flushall ();
	switch (pheptoan){
		case '+':
			{
			tong = a + b;
			printf("KQ la: %.2f\n", tong);
			break;
			}
		case '-':
			{
			hieu = a - b;
			printf("KQ la: %.2f\n", hieu);
			break;
			}
		case '*':
			{
			tich = a * b;
			printf("KQ la: %.2f\n", tich);
			break;
			}
		case '/':
			{
			thuong = a / b;
			printf("KQ la: %.2f\n", thuong);
			break;
			}
		default:
			printf("Nhap ko dung phep tinh. Vui long nhap lai!\n");
	}
	return 0;
	getch ();
}*/