#include "Buoi3_BTHuongDan.h"
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
			s.top = NULL;
			int hethapphan, cosocandoi;
			printf("Nhap gia tri he 10: "); scanf("%d", &hethapphan);
			do
			{
				printf("Nhap co so can doi (2, 8, 16): "); scanf("%d", &cosocandoi);
			} while (cosocandoi != 2 && cosocandoi != 8 && cosocandoi != 16);
			ChuyenCoSo(s, cosocandoi, hethapphan);
			XuatStack_CoSo(s);
			printf("\n");
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}