/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float TL, GK, CK, TB;
	printf("Nhap diem tieu luan: "); scanf("%f", &TL);
	printf("Nhap diem giua ky: "); scanf("%f", &GK);
	printf("Nhap diem cuoi ky: "); scanf("%f", &CK);
	TB = TL * 0.2 + GK * 0.3 + CK * 0.5;
	printf("Diem TB: %.2f", TB);
	if (TB >= 8.5)
		printf("\tBan duoc diem: A\n");
	else if (TB >= 7.0)
		printf("\tBan duoc diem: B\n");
	else if (TB >= 5.5)
		printf("\tBan duoc diem: C\n");
	else if (TB >= 4.0)
		printf("\tBan duoc diem: D\n");
	else
		printf("\tBan duoc diem: F\n");
	return 0;
	getch ();
}*/
