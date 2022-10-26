#include "Stack_DSLKDon.h"
int main()
{
	Stack s;
	int chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			createLStack_Auto(s);
			break;
		}
		case 2:
		{
			OutputStack(s);
			break;
		}
		case 3:
		{
			Stack a;
			Function3(s, a);
			break;
		}
		case 4:
		{
			Stack a;
			a.top = NULL;
			int thapphan, cosodoi;
			printf("Nhap gia tri thap phan can chuyen: "); scanf("%d", &thapphan);
			do
			{
				printf("Nhap co so can doi (2, 8, 16): "); scanf("%d", &cosodoi);
			} while (cosodoi != 2 && cosodoi != 8 && cosodoi != 16);
			ChuyenCoSo(a, cosodoi, thapphan);
			printf("Ket qua: ");
			XuatStack_CoSo(a);
			printf("\n");
			break;
		}
		case 5:
		{
			cStack s;
			char a[MAX];
			s.top = NULL;
			printf("Nhap bieu thuc: "); scanf("%s", &a);
			printf("Xuat bieu thuc: %s\n", a);
			if (FINDdaungoac(s, a))
			{
				printf("Bieu thuc chua dau ngoac don trung lap\n");
			}
			else
			{
				printf("Bieu thuc ko chua dau ngoac don trung lap\n");
			}
			break;
		}
		case 6:
		{
			char Infix[MAX], Postfix[MAX];
			InfixtoPostfix(Infix, Postfix);
			break;
		}
		case 7:
		{
			char Infix[MAX], Postfix[MAX];
			InfixtoPostfix(Infix, Postfix);
			TinhGiaTriPostfix(Postfix);
			break;
		}
		case 8:
		{
			s.top = NULL;
			GiaiThua(s);
			break;
		}
		}
	}
	while(chon != 0);
	_getch();
	return 0;
}