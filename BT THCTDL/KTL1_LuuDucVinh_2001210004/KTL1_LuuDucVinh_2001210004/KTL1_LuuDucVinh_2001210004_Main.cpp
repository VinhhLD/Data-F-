#include "KTL1_LuuDucVinh_2001210004.h"
int main()
{
	SList l;
	FILE *f;
	int chon;
	showMenu();
	do
	{
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
				  docFile(f, l);
				  break;
		}
		case 2:
		{
				  xuatFile(l);
				  break;
		}
		case 3:
		{
				  HVDiemHon7(l);
				  break;
		}
		case 4:
		{
				  printf("Tong tien Hoc Phi cua cac hoc vien trong danh sach la: %d\n", TinhTongHP(l));
				  break;
		}
		case 5:
		{
				  deleteDiemBeHon2(l);
				  xuatFile(l);
				  break;
		}
		case 6:
		{
				  HocVien x;
				  char y[100];
				  Node *p, *q;
				  printf("Nhap ma hoc vien can them: "); scanf("%s", x.maHV);
				  printf("Nhap ho lot hoc vien can them: "); scanf("%s", x.holot);
				  printf("Nhap ten Hoc Vien can them: "); scanf("%s", x.tenHV);
				  printf("Nhap ten lop hoc vien can them: "); scanf("%s", x.tenlop);
				  printf("Nhap hoc phi hoc vien can them: "); scanf("%d", &x.HocPhi);
				  printf("Nhap diem TB hoc vien can them: "); scanf("%f", &x.DiemTB);
				  printf("Nhap ten Hoc Vien sau Hoc vien can them: "); scanf("%s", y);
				  q = findSNode(l, y);
				  if (q != NULL)
				  {
					  p = createSNode(x);
					  insertBefore(l, p, q);
					  printf("Da them thanh cong!\n");
				  }
				  else
				  {
					  printf("Khong tim thay %d trong DSLK\n", y);
				  }
				  break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}