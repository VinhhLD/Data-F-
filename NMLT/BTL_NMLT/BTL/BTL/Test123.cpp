#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	for (int i = 2; i <= 9; i++)
	{
		printf("Bang cuu chuong %d:\n", i);
		for (int j = 1; j <= 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	return 0;
	getch ();
}