#include "Buoi7_BRTree_BTLop.h"
/* Hàm main để thực hiện kiểm tra kết quả */
int main()
{
	BRTree brtree;
	initBRTree(brtree);
	ItemType a[] = { 4, 7, 12, 15, 3, 5, 14, 18, 16, 17 };
	int n = 10;
	int x, kq, k;
	int chon;
	Menu();
	do {
		printf("\nMoi ban chon chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				createBRTreeFromArray(brtree, a, n);
				printf("\nOutput: NLR\n");
				showBRTree_InOrder(brtree.Root);
			}
			break;
		case 2:
			{
				printf("\nOutput: NLR\n");
				showBRTree_InOrder(brtree.Root);
				break;
			}
		case 3:
			{
				//printf("\nOutput: Duyet theo chieu rong (Breadth-first traverse) \n");
				showLevelOrder(brtree.Root);
				break;
			}
		case 4:
			{
				//printf("\nOutput: Duyet theo chieu sau Pre-Order (Depth-first traverse) \n");
				showPreOrder(brtree.Root);
				break;
			}
		case 5:
		{
			deleteByInfo(brtree.Root, 3);
			printf("\nOutput: sau khi xoa 3");
			showLevelOrder(brtree.Root);
			_getch();
			deleteByInfo(brtree.Root, 50);
			_getch();
		}
		case 6:
		{
			printf("\nNhap gia tri muon tim: ");
			scanf_s("%d", &x);
			BRTNode* p = searchNode(brtree.Root, x);
			if (p != NULL)
				printf("\nTim thay %d trong cay.", x);
			else
				printf("\nKhong tim thay %d trong cay.", x);
		break;
		}
		case 7:
		{
			kq = CountBRTree(brtree.Root);
			printf("\nSo nut trong cay la: %d", kq);
			break;
		}
		case 8:
			{
				printf("\nNhap muc k: ");
				scanf_s("%d", &k);
				kq = CountBRTreeLevelK(brtree.Root, k);
				printf("\nSo nut trong cay la: %d", kq);
			}
			break;
		case 9:
			{
				kq = SumBRTree(brtree.Root);
				printf("\nTong gia tri nut trong cay la: %d", kq);
				break;
			}
		case 10:
			{
				int d;
				printf("Nhap gia tri nut muon them vao: "); scanf("%d", &d);
				insert(brtree.Root, d);
				showBRTree_InOrder(brtree.Root);
				break;
			}
		case 11:
			{
				int d;
				printf("Nhap gia tri nut muon xoa: "); scanf("%d", &d);
				deleteByInfo(brtree.Root, d);
				break;
			}
		case 12:
			{
				int d;
				printf("Nhap gia tri muon tim: "); scanf("%d", &d);
				if (searchNode(brtree.Root, d) != NULL)
				{
					printf("Ton tai nut co gia tri %d trong cay\n", d);
				}
				else
				{
					printf("Ko ton tai nut co gia tri %d trong cay\n", d);
				}
				break;
			}
		case 13:
			{
				printf("So luong nut do trong cay la: %d\n", CountBRTreeRed(brtree.Root));
				break;
			}
		default:
			printf("\nVui long chon lai!!");
			break;
		}
	} while (chon != 0);
	getch();
	return 0;
}