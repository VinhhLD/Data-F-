#include "BTree_BTVN.h"
int main()
{
	BTree bt;
	int chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			createBTree_Auto(bt);
			break;
		}
		case 2:
		{
			createBTree_FromArray(bt);
			break;
		}
		case 3:
		{
			createBTree_FromKeyboard(bt);
			break;
		}
		case 4:
		{
			traverseNLR(bt.Root);
			printf("\n");
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}