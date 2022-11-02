#include "Buoi3_BTVN.h"
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
			char Infix[MAX], Postfix[MAX];
			InfixtoPostfix(Infix, Postfix);
			TinhGiaTriPostfix(Postfix);
			break;
		}
		case 2:
		{
			s.top = NULL;
			GiaiThua(s);
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}