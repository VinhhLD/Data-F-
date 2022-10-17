//#include "DSLKDon_BaiTHLopBai2.h"
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
//				  printf("Tong thoi gian: %d\n", TongTgian(l));
//				  break;
//		}
//		case 4:
//		{
//				  int choose;
//				  BaiHat x;
//				  printf("Nhap ten bai hat: "); scanf("%s", x.TenBH);
//				  printf("Nhap ten tac gia: "); scanf("%s", x.Tacgia);
//				  printf("Nhap ten ca si: "); scanf("%s", x.Casi);
//				  printf("Nhap thoi luong: "); scanf("%d", &x.thoigian);
//				  Node *p = creatSNode(x);
//				  do
//				  {
//					  printf("1.Them bai hat vao dau\n");
//					  printf("2.Them bai hat vao cuoi\n");
//					  printf("Chon chuc nang: "); scanf("%d", &choose);
//					  switch (choose)
//					  {
//					  case 1:
//					  {
//								insertHead(l, p);
//								break;
//					  }
//					  case 2:
//					  {
//								insertTail(l, p);
//								break;
//					  }
//					  }
//				  } while (choose != 1 && choose != 2);
//				  break;
//		}
//		case 5:
//		{
//			deleteX(l);
//			break;
//		}
//		case 6:
//		{
//			Node* q;
//			char x[51];
//			printf("Nhap ten bai hat: "); scanf("%s", x);
//			q = findSNode(l, x);
//			if (q != NULL)
//			{
//				printf("Bai hat %s co trong danh sach\n", x);
//			}
//			else
//			{
//				printf("Khong tim thay bai hat %s trong danh sach\n", x);
//			}
//			break;
//		}
//		case 7:
//		{
//			Giam_InterchangeSortSList(l);
//			break;
//		}
//		case 8:
//		{
//			DuaBaiHatLenDau(l);
//			break;
//		}
//		}
//	}
//	while (chon != 0);
//	getch();
//	return 0;
//}