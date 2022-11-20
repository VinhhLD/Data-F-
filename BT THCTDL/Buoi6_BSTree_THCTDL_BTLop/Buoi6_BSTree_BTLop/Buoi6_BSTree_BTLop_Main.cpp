#include "Buoi6_BSTree_BTLop.h"
int main()
{
	BSTree bst;
	int chon;
	do
	{
		printf("1. Bai 1\n");
		printf("2. Bai 2\n");
		printf("3. Bai 3\n");
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
				  int choose;
				  do
				  {
					  showMenu1();
					  printf("Chon chuc nang: "); scanf("%d", &choose);
					  switch (choose)
					  {
					  case 1:
					  {
								createBSTree_Auto(bst);
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
								createBSTree_Array(bst);
								break;
					  }
					  case 4:
					  {
								createBSTree_Keyboard(bst);
								break;
					  }
					  case 5:
					  {
								traverseBreadthNLR(bst.Root);
								printf("\n");
								break;
					  }
					  case 6:
					  {
								NLR(bst.Root);
								printf("\n");
								break;
					  }
					  case 7:
					  {
								int x;
								printf("Nhap gia tri x muon them: "); scanf("%d", &x);
								TSNode *p = createTSNode(x);
								insertTSNode(bst.Root, p);
								break;
					  }
					  case 8:
					  {
								int x;
								printf("Nhap gia tri can tim: "); scanf("%d", &x);
								if (findTSNode(bst.Root, x) != NULL)
								{
									printf("Trong cay ton tai node co gia tri %d\n", x);
								}
								else
								{
									printf("Khong ton tai node gia tri %d trong cay\n", x);
								}
								break;
					  }
					  case 9:
					  {
								int x;
								printf("Nhap gia tri node muon xoa: "); scanf("%d", &x);
								if (deleteTSNodeX(bst.Root, x) == 1)
								{
									printf("Da xoa thanh cong node gia tri %d\n", x);
								}
								else
								{
									printf("Xoa khong thanh cong node gia tri %d\n", x);
								}
								break;
					  }
					  case 10:
					  {
								 RNL(bst.Root);
								 printf("\n");
								 break;
					  }
					  case 11:
					  {
								 deleteTree(bst.Root);
								 printf("Da xoa\n");
								 break;
					  }
					  case 12:
					  {
								 TSNode *p = MaxTSNode(bst.Root);
								 printf("Node co gia tri lon nhat trong cay %d\n", p->Info);
								 break;
					  }
					  case 13:
					  {
								 TSNode *p = MinTSNode(bst.Root);
								 printf("Node co gia tri nho nhat trong cay %d\n", p->Info);
								 break;
					  }
					  case 14:
					  {
								 int x;
								 printf("Nhap gia tri muon dem: "); scanf("%d", &x);
								 printf("Trong cay co %d node co gia tri lon hon %d\n", CountGreaterThanX(bst.Root, x), x);
								 break;
					  }
					  case 15:
					  {
								 printf("Tong gia tri duong trong cay: %d\n", TongDuong(bst.Root));
					  }
					  case 16:
					  {
								 printf("Tong gia tri am trong cay: %d\n", TongAm(bst.Root));
					  }
					  }
				  }
				  while (choose != 0);
				  break;
		}
		case 2:
		{
				  BSTreePS bstPS;
				  int choose;
				  do
				  {
					  showMenu2();
					  printf("Chon chuc nang: "); scanf("%d", &choose);
					  switch (choose)
					  {
					  case 1:
					  {
								createBSTreePS_Auto(bstPS);
								break;
					  }
					  case 2:
					  {
								NLRPS(bstPS.Root);
								break;
					  }
					  }
				  } while (choose != 0);
				  break;
		}
		case 3:
		{
			int choose;
			do
			{
				showMenu3();
				printf("Chon chuc nang: "); scanf("%d", &choose);
				switch (choose)
				{
				case 1:
				{
					printf("Cac so hoan thien trong cay: ");
					SHT(bst.Root);
					printf("\n");
					break;
				}
				case 2:
				{
					int k;
					printf("Nhap muc k: "); scanf("%d", &k);
					printf("Cac nut o muc %d trong cay la: ", k);
					showTSNodeLevelK(bst.Root, k);
					printf("\n");
					break;
				}
				case 3:
				{
					printf("Chieu cao cua cay la: %d\n", hightBSTree(bst.Root));
					for (int i = 0; i < hightBSTree(bst.Root) - 1; i++)
					{
						printf("Cac nut o tang %d trong cay la: ", i);
						showTSNodeLevelK(bst.Root, i);
						printf("\n");
					}
					break;
				}
				case 4:
				{
					int count = 0;
					printf("So luong nut la co gia tri chan trong cay la: %d\n", CountTSNodeIsLeafEven(bst.Root, count));
					break;
				}
				case 5:
				{
					int dem = 0;
					printf("So luong nut co 1 con va la SNT trong cay la: %d\n", CountTSNodeHave1ChildIsSNT(bst.Root, dem));
					break;
				}
				case 6:
				{
					int dem = 0;
					printf("So luong nut co 2 con va la SCP trong cay la: %d\n", CountTSNodeHave2ChildIsSCP(bst.Root, dem));
					break;
				}
				case 7:
				{
					int dem = 0;
					int k;
					do
					{
						printf("Nhap muc k: "); scanf("%d", &k);
					} while (k <= 0 || k > hightBSTree(bst.Root));
					printf("So luong nut nam o tang thap hon %d trong cay la: %d\n", k, DemTangThapHonK(bst.Root, k));
					break;
				}
				case 8:
				{
					int dem = 0;
					int k;
					do
					{
						printf("Nhap muc k: "); scanf("%d", &k);
					} while (k <= 0 || k > hightBSTree(bst.Root));
					printf("So luong nut nam o tang cao hon %d trong cay la: %d\n", k, DemTangCaoHonK(bst.Root, k));
					break;
				}
				case 9:
				{
					printf("Tong cac nut co gia tri le trong cay: %d\n", SumTSNodeOdd(bst.Root));
					break;
				}
				case 10:
				{
					printf("Tong cac nut la co gia tri chan trong cay la: %d\n", SumTSNodeIsLeafEven(bst.Root));
					break;
				}
				case 11:
				{
					int dem = 0;
					printf("Tong gia tri cac nut co 1 con va la SNT trong cay la: %d\n", SumTSNodeHave1ChildIsSNT(bst.Root, dem));
					break;
				}
				case 12:
				{
					int dem = 0;
					printf("Tong gia tri cac nut co 2 con va la SCP trong cay la: %d\n", SumTSNodeHave2ChildIsSCP(bst.Root, dem));
					break;
				}
				}
			} while (choose != 0);
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}