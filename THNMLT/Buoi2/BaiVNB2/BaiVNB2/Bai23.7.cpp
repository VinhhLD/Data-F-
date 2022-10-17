/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int i;
	printf("Cac so co 3 chu so khac nhau doi mot la:\n");
	for (i = 1; i <= 9; i++)
	{
		for (int k = 0; k <= 9; k++)
		{
			for (int j = 0; j <= 9; j++)
				if (i != k && k != j && i != j)
					printf("%d%d%d\n", i, k, j);
		}
	}
	return 0;
	getch ();
}*/
