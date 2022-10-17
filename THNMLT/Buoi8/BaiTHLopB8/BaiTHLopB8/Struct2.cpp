#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
struct Sinhvien
{
	char mssv[10];
	char hoten[50];
	int NS;
	char noisinh[30];
};
void Docfile (Sinhvien SV[], int &n);
{
	FILE* f = fopen("data4.txt", "rt");
	if (!f)
	{
		printf("Loi doc file");
		return;
	}
	char mssv[10], hoten[50], noisinh[30];
	int NS;
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fgets(sv[i].mssv, 10, f);
		fgets(sv[i].hoten, 50, f);
		fgets(sv[i].NS, 5, f);
		fgets(sv[i].NOISINH, 10, f);
	}
}