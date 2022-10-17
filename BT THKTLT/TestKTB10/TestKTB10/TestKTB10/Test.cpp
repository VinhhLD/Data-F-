#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
void KSoCuoi (int &k, int &m, int &n);
int main ()
{
	int k, m, n;
	KSoCuoi(k, m, n);
	return 0;
	getch ();
}
void KSoCuoi (int &k, int &m, int &n)
{
	long long s;
	printf("Nhap K: "); scanf_s("%d", &k);
	printf("Nhap M: "); scanf_s("%d", &m);
	printf("Nhap N: "); scanf_s("%d", &n);
	s = (int)pow((float)m, n) % (int)pow(10.0, k);
	printf("Nhu vay %d chu so cuoi cung cua %d la %lld\n", k, (int)pow((float)m, n), s);
}
