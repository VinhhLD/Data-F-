#include "Stack_BTLop.h"
int main()
{
	Stack s;
	int chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
				  initstack(s);
				  int hethapphan, cosocandoi;
				  printf("Nhap gia tri he 10: "); scanf("%d", &hethapphan);
				  do
				  {
					  printf("Nhap co so can chuyen (2, 8, 16): "); scanf("%d", &cosocandoi);
				  } while (cosocandoi != 2 && cosocandoi != 8 && cosocandoi != 16);
				  ChuyenCoSo(s, cosocandoi, hethapphan);
				  printf("Ket qua: ");
				  XuatStack_CoSo(s);
				  printf("\n");
				  break;
		}
		case 2:
		{
				  char a[100];
				  printf("Nhap bieu thuc: "); scanf("%s", a);
				  if (TimNgoacHopLe(a))
				  {
					  printf("Bieu thuc ngoac hop le\n");
				  }
				  else
					  printf("Bieu thuc ngoac ko hop le\n");
				  break;
		}
		case 3:
		{
				  cStack c;
				  char a[100];
				  c.top = NULL;
				  printf("Nhap bieu thuc: "); scanf("%s", a);
				  printf("Xuat bieu thuc: %s\n", a);
				  if (TimNgoacTrungLap(c, a))
				  {
					  printf("Bieu thuc ko chua dau ngoac trung lap\n");
				  }
				  else
				  {
					  printf("Bieu thuc chua dau ngoac trung lap\n");
				  }
				  break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}