#include "TestKtralan1.h"
int main()
{
	FILE* f;
	SList l;
	cStack s;
	int chon;
	do
	{
		showMenu();
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
			MatDoLonHonX(l);
			break;
		}
		case 4:
		{
			deleteTinhX(l);
			break;
		}
		case 5:
		{
			SapXepTenTinhSelectionSort(l);
			printf("Danh sach sau khi sap xep tang dan theo ten tinh la\n");
			xuatFile(l);
			break;
		}
		case 6:
		{
			Bai2(s);
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}