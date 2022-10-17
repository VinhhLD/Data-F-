/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void Docmatran (int a[][MAXCOL], int &m, int &n);
	void xuatmatran (int a[][MAXCOL], int m, int n);
void docfile1 ()
{
	FILE* f = fopen("data1.txt", "rt");
	if (!f)
	{
		printf("Loi doc file");
		return;
	}
	char s[20];
	while (!feof(f)) // ko co so phan tu
	{
		fgets(s, 20, f);
		puts(s);
	}
	fclose(f);
}
void docfile2 ()
{
	FILE* f = fopen("data2.txt", "rt");
	if (!f)
	{
		printf("Loi doc file");
		return;
	}
	int n, x;
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++) // co so phan tu
	{
		fscanf(f, "%d", &x);
		printf("%d  ", x);
	}
	fclose(f);
}
void Docmatran (int a[][MAXCOL], int &m, int &n)
{
	FILE* f = fopen("data3.txt", "rt");
	if (!f)
	{
		printf("Loi doc file");
		return;
	}
	fscanf(f, "%d", &m);
	fscanf(f, "%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fscanf(f, "%d", &a[i][j]);
		}
	}
	fclose(f);
}
void xuatmatran (int a[][MAXCOL], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main ()
{
	int a[MAXROW][MAXCOL], m, n;
	printf("Doc file 1: \n");
	docfile1();
	printf("Doc file 2: \n");
	docfile2();
	Docmatran(a, m, n);
	printf("\nXuat ma tran: \n");
	xuatmatran(a, m, n);
	return 0;
	getch ();
}*/