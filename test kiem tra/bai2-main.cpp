#include "bai2.h"
/* Hàm main để thực hiện kiểm tra kết quả */
void Menu()
{
	printf("\n==========================================================================");
	printf("\n				MENU														");
	printf("\n==========================================================================");
	printf("\n1. Doc danh sach tu mang cho truoc.										");
	printf("\n2. Duyet cay .															");
	printf("\n3. Duyet cay theo chieu rong.												");
	printf("\n4. Duyet cay theo chieu sau.												");
	printf("\n5. Tim kiem nghia tieng viet cua tu tieng anh.                			");
	printf("\n6. Them mot Tu vao tu dien  												");
	printf("\n7. Xoa mot tu khoi tu dien 												");
	printf("\n8. Sua Nghia mot tu trong tu dien 									    ");
	printf("\n9. Xoa Tu Dien            												");
	printf("\n==========================================================================");
}
void process()
{
	BRTree brtree;
	initBRTree(brtree);
	int n = 10;
	BRTNode* p;
	int x, kq, k;
	char chuoi[100], chuoiedit[100];
	int chon;
	AV add, delet, edit;
	Menu();
	do {
		printf("\nMoi ban chon chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			createBRTree(brtree);
			printf("\nOutput: NLR\n");
			printf("%5s%25s%18s%12s\n", "MASACH", "TEN SACH", "NHA XB", "NAM XB");
			showBRTree_InOrder(brtree.Root);
			break;
		case 2:
			printf("\nOutput: NLR\n");
			showBRTree_InOrder(brtree.Root);
			break;
		case 3:
			//printf("\nOutput: Duyet theo chieu rong (Breadth-first traverse) \n");
			showLevelOrder(brtree.Root);
			break;
		case 4:
			//printf("\nOutput: Duyet theo chieu sau Pre-Order (Depth-first traverse) \n");
			showPreOrder(brtree.Root);
			break;
		case 5:
			deleteCay(brtree.Root);
			break;
		default:
			printf("\nVui long chon lai!!");
			break;
		}
	} while (chon != 0);
}
void main()
{
	process();
}