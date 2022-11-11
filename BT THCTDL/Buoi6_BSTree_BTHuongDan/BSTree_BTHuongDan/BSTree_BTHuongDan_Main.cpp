#include "BSTree_BTHuongDan.h"
int main()
{
	BSTree bst;
	int chon;
	showMenu();
	do
	{
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			createBSTree_Auto(bst);
			break;
		}
		case 2:
		{
			NLR(bst.Root);
			printf("\n");
			break;
		}
		case 3:
		{
			int* a;
			a = new int;
			createBSTree_Array(bst, a);
			break;
		}
		case 4:
		{
			printf("Trong cay co %d pt chan\n", countTSNodeEven(bst.Root));
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}