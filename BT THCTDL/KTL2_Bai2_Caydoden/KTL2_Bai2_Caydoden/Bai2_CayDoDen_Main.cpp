#include "Bai2_CayDoDen.h"
int main()
{
	BRTree brt;
	FILE* f;
	int chon;
	do
	{
		Menu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			createBRTree(brt, f);
			break;
		}
		case 2:
		{
			printf("%-10s%-40s%-20s%10s\n", "MA SACH", "TEN SACH", "NHAXB", "NAM");
			showBRTree_InOrder(brt.Root);
			break;
		}
		}
	} while (chon != 0);
	return 0;
	getch();
}