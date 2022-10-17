/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{	long n;	int flag = 1;	printf("\nNhap n: ");	scanf_s("%ld", &n);	while (n > 0)	{		if( n % 2 != 0)		{			flag = 0;			break;		}		n = n / 10;	}	if (flag)		printf(" n toan so chan\n");	else		printf("n co so le\n");	return 0;	getch ();}*/