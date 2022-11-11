#include "BSTree_BTHuongDan.h"
TSNode* createTSNode(int x)
{
	TSNode* p = new TSNode;
	if (p == NULL)
	{
		return NULL;
	}
	p->Info = x;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void initBSTree(BSTree& bst)
{
	bst.Root = NULL;
}
int insertTSNode(TSNode*& root, TSNode* p)
{
	if (p == NULL)
	{
		return 0;
	}
	if (root == NULL)
	{
		root = p;
		return 1;
	}
	if (root->Info == p->Info)
	{
		return 0;
	}
	if (p->Info < root->Info)
	{
		insertTSNode(root->Left, p);
	}
	else
	{
		insertTSNode(root->Right, p);
	}
	return 1;
}
void NLR(TSNode* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%5d", root->Info);
	NLR(root->Left);
	NLR(root->Right);
}
void createBSTree_Auto(BSTree& bst)
{
	int n;
	initBSTree(bst);
	srand((unsigned)time(NULL));
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			int x = rand() % 199 - 99;
			TSNode* p = createTSNode(x);
			insertTSNode(bst.Root, p);
		}
	}
}
void showMenu()
{
	printf("1. Tao BST auto\n");
	printf("2. Xuat BST\n");
	printf("3. Tao BST bang Array\n");
	printf("4. Dem pt chan trong cay\n");
}
void createBSTree_Array(BSTree& bst, int* a)
{
	int n;
	initBSTree(bst);
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			printf("Nhap gia tri node: "); scanf("%d", &a[i]);
			TSNode* p = createTSNode(a[i]);
			insertTSNode(bst.Root, p);
		}
	}
}
int countTSNodeEven(TSNode* root)
{
	if (root == NULL) return 0;
	int nl = countTSNodeEven(root->Left);
	int nr = countTSNodeEven(root->Right);
	if (root->Info % 2 == 0)
	{
		return (1 + nl + nr);
	}
	return (nl + nr);
}
TSNode* minTSNode(TSNode* root)
{
	TSNode* p = root;
	while (p->Left != NULL)
	{
		p = p->Left;
	}
	return p;
}