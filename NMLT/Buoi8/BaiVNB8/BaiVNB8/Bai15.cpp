/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a, b, c, d, e;
	printf("Cac so co 5 chu so va co 2 chu so bang nhau la: ");
	for (long i = 10000; i <= 99999; i++)
	{
		a = i / 10000;
		b = (i / 1000) % 10;
		c = (i / 100) % 10;
		d = (i / 10) % 10;
		e = i % 10;
		if (a == b || b == c || c == d || d == e || a == e)
		{
			printf("%ld ", i);
		}
	}
	return 0;
	getch ();
}*/