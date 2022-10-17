/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define PI 3.141592654
int main ()
{
	int chon;
	printf("\t1.In ra man hinh\t2.Chuc nang doi nhiet do C sang do F\t3.Tinh chu vi va dien tich hinh tron\n");
	do
	{
	printf("Hay chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon){
	case 1:
		{
			printf("Xin chao cac ban\n");
			break;
		}
	case 2:
		{
			float C, F;
			printf("Nhap nhiet do C: "); scanf_s("%f", &C);
			F = (float)1.8 * C + 32;
			printf("Nhiet do F la: %.1fF\n", F);
			break;
		}
	case 3:
		{
			float r, d, p, s;
			printf("Nhap do dai canh Hinh Vuong: "); scanf_s("%f", &r);
			d = r + r;
			p = d * (float)PI;
			s = (float)PI * r * r;
			printf("Chu vi Hinh Tron = %.2f", p);
            printf("\nDien tich Hinh Tron = %.2f\n", s);
            break;
		}
	default:
		printf("So vua nhap khong hop le!\n");
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}*/