/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define PI 3.14
struct toado
{
	int x;
	int y;
	float r;
};
void nhaphinhtron (toado &a);
void xuathinhtron (toado a);
float chuvihinhtron (toado a);
float dientichhinhtron (toado a);
int main ()
{
	toado a;
	nhaphinhtron(a);
	xuathinhtron(a);
	printf("Hinh tron co chu vi la: %.2f\n", chuvihinhtron(a));
	printf("Hinh tron co dien tich la: %.2f\n", dientichhinhtron(a));
	return 0;
	getch ();
}
void nhaphinhtron (toado &a)
{
	printf("Nhap thong tin hinh tron\n");
	printf("NHAP TOA DO\n");
	printf("\tNhap x: "); scanf_s("%d", &a.x);
	printf("\tNhap y: "); scanf_s("%d", &a.y);
	printf("\tNhap ban kinh r: "); scanf_s("%f", &a.r);
}
void xuathinhtron (toado a)
{
	printf("Thong tin hinh tron ban vua nhap la\n");
	printf("\tToa do la: (%d , %d)\n", a.x, a.y);
	printf("\tBan kinh r la: %.2f\n", a.r);
}
float chuvihinhtron (toado a)
{
	return (float)2 * a.r * (float)PI;
}
float dientichhinhtron (toado a)
{
	return a.r * a.r * (float)PI;
}*/