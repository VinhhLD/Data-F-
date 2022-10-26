#include "DSLKDon_SoNguyen.h"
int main()
{
	SList l;
	int chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
			case 1:
			{
				creatSList_Auto(l);
				break;
			}
			case 2:
			{
				showSList(l);
				break;
			}
			case 3:
			{
				int x;
				printf("Nhap gia tri pt muon them vao head: "); scanf("%d", &x);
				Node *p = creatSNode(x);
				insertHead(l, p);
				break;
			}
			case 4:
			{
				int x;
				printf("Nhap gia tri pt muon them vao tail: "); scanf("%d", &x);
				Node *p = creatSNode(x);
				insertTail(l, p);
				break;
			}
			case 5:
			{
				int x, y;
				Node *p, *q;
				printf("Nhap gia tri pt p can them: "); scanf("%d", &x);
				printf("Nhap pt sau pt p: "); scanf("%d", &y);
				q = findSNode(l, y);
				if (q != NULL)
				{
					p = creatSNode(x);
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
	} 
	while (chon != 0);
	getch();
	return 0;
}