/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int i;
	printf("Cac so tu nhien co 3 chu so khac nhau doi mot la:\n");
	for (i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = 1; k <= 9; k++)
				if (i != j && j != k && i != k)
					printf("%d%d%d\n", i, j, k);
		}
	}
	return 0;
	getch ();
}*/
