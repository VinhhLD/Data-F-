#include "Bai2Mayin.h"
int main()
{
	Queue qu;
	char a[10] = { '!',',','#','$',' % ',' ^ ',' & ',' * ','(' };
	char b[10] = { 'b','b','b','b','b','b','b','b','b' };
	char c[10] = { 'c','c','c','c','c','c','c','c','c' };
	char d[10];
	KhoitaoDSin(qu, a, b, c, d);
	getch();
	return 0;
}