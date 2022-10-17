//#include "DSLKDon_BaiTHLopBai1.h"
//int main()
//{
//	FILE *f;
//	SList l;
//	int chon;
//	do
//	{
//		showMenu();
//		printf("Chon chuc nang: "); scanf("%d", &chon);
//		switch (chon)
//		{
//		case 1:
//		{
//				  l.head = l.tail = NULL;
//				  docFile(f, l);
//				  break;
//		}
//		case 2:
//		{
//				  showSList(l);
//				  break;
//		}
//		case 3:
//		{
//				  deletetHead(l);
//				  break;
//		}
//		case 4:
//		{
//			int x;	
//			Node* q;
//			printf("Nhap gia tri phan tu: "); scanf("%d", &x);
//			q = findSNode(l, x);
//			if (deleteAfter(l, q) == false)
//			{
//				printf("Khong tim thay %d trong dslk hoac PT sau %d la NULL\n", x, x);
//			}
//			else
//			{
//				printf("Da xoa pt sau %d thanh cong\n", x);
//			}
//			break;
//		}
//		case 5:
//		{
//			deleteX(l);
//			break;
//		}
//		case 6:
//		{
//			deleteSList(l);
//			break;
//		}
//		case 7:
//		{
//			deleteEven(l);
//			break;
//		}
//		}
//	} while (chon != 0);
//	getch();
//	return 0;
//}