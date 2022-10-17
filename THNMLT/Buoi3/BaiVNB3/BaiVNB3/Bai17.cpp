/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void kiemtra (long N)
{
	long s = 0;
	long m = 0;
	do
	{
		m = m + 1;
		s = s + m;
	} 
	while (s + m + 1 < N);
	printf("So M lon nhat la: %ld\n",  m);
}
int main ()
{
	long N;
	printf("Nhap N: "); scanf_s("%ld", &N);
	printf("Tinh M lon nhat sao cho: 1 + 2 + 3 + ... + m < n\n");
	kiemtra(N);
	return 0;
	getch ();
}*/