#include "Buoi4_Queue_BTVN.h"
int main()
{
	Queue qu;
	FILE* f;
	int chon;
	showMenu();
	do
	{
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			docFile(f, qu);
			break;
		}
		case 2:
		{
			xuatFile(qu);
			break;
		}
		case 3:
		{
			printf("Thong tin mat hang chuan bi xuat kho:\n");
			printf("%-10s%-20s%-15s%-10s\n", "MA HANG", "TEN HANG", "DON VI TINH", "SO LUONG");
			showQNode(top(qu));
			break;
		}
		case 4:
		{
			printf("Xuat kho mat hang:\n");
			QNode* p = popQ(qu);
			printf("%-10s%-20s%-15s%-10s\n", "MA HANG", "TEN HANG", "DON VI TINH", "SO LUONG");
			showQNode(p);
			delete p;
			break;
		}
		case 5:
		{
			printf("Thong tin mat hang vua nhap vao kho:\n");
			printf("%-10s%-20s%-15s%-10s\n", "MA HANG", "TEN HANG", "DON VI TINH", "SO LUONG");;
			showQNode(qu.tail);
			break;
		}
		case 6:
		{
			char x[100];
			printf("Nhap ten hang can xem thong tin trong kho: ");
			fflush(stdin);
			getchar();
			gets_s(x);
			if (findQNode(qu, x) != NULL)
			{
				printf("%-10s%-20s%-15s%-10s\n", "MA HANG", "TEN HANG", "DON VI TINH", "SO LUONG");
				showQNode(findQNode(qu, x));
			}
			else
			{
				printf("Khong tim thay hang hoa ten %s trong danh sach\n", x);
			}
			break;
		}
		case 7:
		{
			deleteALL(qu);
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}