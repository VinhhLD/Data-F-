#include "Btree.h"
int main()
{
	BTree bt;
	int chon;
	showMenu();
	do
	{
		printf("Chon chuc nang: "); scanf("%d", &chon);
		{
			switch (chon)
			{
			case 1:
			{
				createBTree_Auto(bt);
				break;
			}
			case 2:
			{
				traverseNLR(bt.Root);
				printf("\n");
				break;
			}
			case 3:
			{
				printf("Tong so nut tren cay: %d\n", countTNode(bt.Root));
				break;
			}
			case 4:
			{
				printf("Tong so nut la tren cay: %d\n", countTNodeLeaf(bt.Root));
				break;
			}
			case 5:
			{
				int dem = 0;
				int x;
				printf("Nhap gia tri can dem: "); scanf("%d", &x);
				printf("Trong cay co %d node co gia tri %d\n", DemNodeX(bt.Root, dem, x), x);
				break;
			}
			case 6:
			{
				printf("Tong gia tri tren cay: %d\n", sumTNode(bt.Root));
				break;
			}
			case 7:
			{
				int x;
				printf("Nhap gia tri node can xoa node con trai: "); scanf("%d", &x);
				TNode* p = findTNode(bt.Root, x);
				if (p != NULL)
				{
					deleteTNodeLeft(p);
				}
				else
				{
					printf("Khong tim thay node co gia tri %d trong cay\n", x);
				}
				break;
			}
			case 8:
			{
				int x;
				printf("Nhap gia tri node can xoa node con trai: "); scanf("%d", &x);
				TNode* p = findTNode(bt.Root, x);
				if (p != NULL)
				{
					deleteTNodeLeft(p);
				}
				else
				{
					printf("Khong tim thay node co gia tri %d trong cay\n", x);
				}
				break;
			}
			case 9:
			{
				printf("Chieu cao cua cay: %d\n", highTree(bt.Root));
				break;
			}
			}
		}
	} while (chon != 0);
	getch();
	return 0;
}