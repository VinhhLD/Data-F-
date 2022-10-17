#include "DSLKDon_PhanSo.h"
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
				ItemType x;
				printf("Nhap gia tri ts muon them vao head: "); scanf("%d", &x.ts);
				printf("Nhap gia tri ms muon them vao head: "); scanf("%d", &x.ms);
				Node *p = creatSNode(x);
				insertHead(l, p);
				break;
			}
			case 4:
			{
				ItemType x;
				printf("Nhap gia tri ts muon them vao tail: "); scanf("%d", &x.ts);
				printf("Nhap gia tri ms muon them vao tail: "); scanf("%d", &x.ms);
				Node *p = creatSNode(x);
				insertTail(l, p);
				break;
			}
			case 5:
			{
				ItemType x, y;
				Node *p, *q;
				printf("Nhap gia tri pt p(TS/MS) can them: "); scanf("%d%d", &x.ts, &x.ms);
				printf("Nhap pt sau pt p(TS/MS): "); scanf("%d%d", &y.ts, &y.ms);
				q = findSNode(l, y);
				if (q != NULL)
				{
					p = creatSNode(x);
					insertBefore(l, p, q);
					printf("Da them thanh cong!\n");
				}
				else
				{
					printf("Khong tim thay %d/%d trong DSLK\n", y.ts, y.ms);
				}
				break;
			}
		}
	} 
	while (chon != 0);
	getch();
	return 0;
}