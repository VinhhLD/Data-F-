#include "KTL2_THCTDL.h"
int main()
{
	FILE* f;
	BSTree bst;
	int chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			docFile(f, bst);
			break;
		}
		case 2:
		{
			NLR(bst.Root);
			printf("\n");
			break;
		}
		case 3:
		{
			traverseBreadthNLR(bst.Root);
			printf("\n");
			break;
		}
		case 4:
		{
			int x;
			printf("Nhap x: "); scanf("%d", &x);
			printf("Tong gia tri cac nut la boi so cua %d: %d\n", x, CountBoisocuaX(bst.Root, x));
			break;
		}
		case 5:
		{
			int k;
			printf("Nhap tang thu k: "); scanf("%d", &k);
			printf("So luong nut ko phai nut la va la boi so cua 3 o tang thu %d: %d\n", k, CountTSNodeIsNoLeafLevelK(bst.Root, k));
			break;
		}
		case 6:
		{
			TSNode* max = NULL;
			TSNode* p = MaxSHH(bst.Root, max);
			if (p != NULL)
			{
				printf("So hoan hao lon nhat trong cay la: %d\n", p->Info);
			}
			else
			{
				printf("Cay ko chua so hoan hao\n");
			}
			break;
		}
		case 7:
		{
			int y;
			TSNode* p = bst.Root;
			printf("Nhap y: "); scanf("%d", &y);
			xoaNodeBoiY(bst.Root, y, p);
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}