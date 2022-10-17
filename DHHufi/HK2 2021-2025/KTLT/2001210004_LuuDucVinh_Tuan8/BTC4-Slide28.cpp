/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int Fibonacci(int num);
int main ()
{
	int chon;
	do
	{
	printf("11.Xuat day co n so Fibonacci\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int n, c = 0, i;
			printf("Nhap n:");
			scanf("%d",&n);
			printf("\nDay so Fibonacci co %d so la:\n", n);
			for ( i = 1 ; i <= n ; i++ )
			{
				printf("%d\n", Fibonacci(c));
				c++; 
			}
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
int Fibonacci(int num)
{
   if (num == 0)
     return 0;
   else if ( num == 1 )
     return 1;
   else
     return (Fibonacci(num - 1) + Fibonacci(num - 2));
}
*/