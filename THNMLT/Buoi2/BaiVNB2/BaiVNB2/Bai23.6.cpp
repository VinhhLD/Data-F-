/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	printf("Cac so co 3 chu so va tong 3 so la so chan: ");
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			for (int c = 0; c <= 9; c++)
				if ((a + b + c) % 2 == 0)
					printf(" %d%d%d", a, b, c);
		}
	}
	return 0;
	getch ();
}*/
