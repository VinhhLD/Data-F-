/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a, b, c;
	printf("Cac so co 3 chu so khac nhau: ");
	for (int i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (a != b && b != c && a != c)
		{
			printf("%d ", i);
		}
	}
	return 0;
	getch ();
}*/