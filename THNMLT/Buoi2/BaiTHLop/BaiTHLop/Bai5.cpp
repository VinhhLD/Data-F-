/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define PI 3.141592654
int main ()
{
	int nhap;
	printf("Hay chon hinh ma ban muon tinh Chu Vi va Dien Tich\n");
	printf("\t1.Hinh Vuong\t2.Hinh Chu Nhat\t3.Hinh Tron\n");
	do
	{
	printf("Nhap so: "); scanf_s("%d", &nhap);
	switch (nhap)
	{
	case 1:
		{
			float a, p, s;
			printf("Nhap chieu dai canh Hinh Vuong: "); scanf_s("%f", &a);
			p = (float)4 * a;
			s = (float)a * a;
			printf("Chu vi Hinh vuong = %.2f\n", p);
			printf("Dien tich Hinh vuong = %.2f\n", s);
			break;
		}
	case 2:
		{
            float a, b, p, s;
            printf("Nhap chieu dai HCN = "); scanf("%f",&a);
            printf("Nhap chieu rong HCN = "); scanf("%f",&b);
            p = (float)(a + b) * 2; 
            s = (float)(a * b);
            printf("Chu vi HCN = %.2f",p);
            printf("\nDien tich HCN = %.2f\n",s);
            break;
		}
	case 3:
		{
            float r, D, p, s;
            printf("Nhap ban kinh r cua Hinh Tron = "); scanf("%f",&r);
            D = (float)r + r; //Duong Kinh D
            p = D * (float)PI;
            s = (float)PI * r * r;
            printf("Chu vi Hinh Tron = %.2f",p);
            printf("\nDien tich Hinh Tron = %.2f\n",s);
            break;
        }
        default:
            printf("So vua nhap khong hop le!\n");
    }
	}
	while (nhap != 0);
    return 0;
	getch ();
}*/