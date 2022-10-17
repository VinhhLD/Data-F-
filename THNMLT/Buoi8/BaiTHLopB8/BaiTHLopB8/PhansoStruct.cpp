/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct PHANSO
{
	int tu;
	int mau;
};
void doctep (PHANSO ps[], int &n)
{
	FILE* f = fopen("dataPS.txt", "rt");
	if (!f)
		exit(0);
	int i, j;
	fscanf(f, "%d",	&n);
	for (int k = 0; k < n, k++)
	{
		fscanf(f, "%d%d", &i, &j);
		ps[k].tu = i;
		ps[k].mau = j;
	}
	fclose(f);
}
PHANSO doidau (PHANSO ps)
{
	if (ps.mau < 0)
	{
		ps.tu = ps.tu * -1;
		ps.mau = ps.mau * -1;
	}
	return ps;
}*/