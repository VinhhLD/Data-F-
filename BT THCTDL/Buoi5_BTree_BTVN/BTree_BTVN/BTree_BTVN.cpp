#include "BTree_BTVN.h"
TNode* createTNode(PS x)
{
	TNode* p = new TNode;
	if (p == NULL)
	{
		return NULL;
	}
	p->Info = x;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void initBTree(BTree& bt)
{
	bt.Root = NULL;
}
bool insertTNodeLeft(TNode* T, PS x)
{
	if (T == NULL)
	{
		return false;
	}
	if (T->Left != NULL)
	{
		return false;
	}
	TNode* p = createTNode(x);
	T->Left = p;
	return true;
}
bool insertTNodeRight(TNode* T, PS x)
{
	if (T == NULL)
	{
		return false;
	}
	if (T->Right != NULL)
	{
		return false;
	}
	TNode* p = createTNode(x);
	T->Right = p;
	return true;
}
bool isEmpty(BTree bt)
{
	return bt.Root == NULL;
}
void showTNodePS(TNode* p)
{
	printf("%d/%d", p->Info.ts, p->Info.ms);
}
void traverseNLR(TNode* root)
{
	if (root == NULL)
	{
		return;
	}
	showTNodePS(root);
	printf("\t");
	traverseNLR(root->Left);
	traverseNLR(root->Right);
}
bool insertTNode(TNode*& root, TNode* p)
{
	if (p == NULL)
	{
		return false;
	}
	if (root == NULL)
	{
		root = p;
		return true;
	}
	if (root->Left == NULL)
	{
		insertTNode(root->Left, p);
	}
	else if (root->Right == NULL)
	{
		insertTNode(root->Right, p);
	}
	else
	{
		int x = rand() % 2;
		if (x == 0)
		{
			insertTNode(root->Left, p);
		}
		else
		{
			insertTNode(root->Right, p);
		}
	}
	return true;
}
void createBTree_Auto(BTree& bt)
{
	int n;
	PS x;
	initBTree(bt);
	srand((unsigned)time(NULL));
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			x.ts = rand() % 199 - 99;
			x.ms = rand() % 199 - 99;
			TNode* p = createTNode(x);
			insertTNode(bt.Root, p);
		}
	}
}
void createBTree_FromArray(BTree& bt)
{
	int n;
	PS *x = new PS;
	initBTree(bt);
	srand((unsigned)time(NULL));
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			x[i].ts = rand() % 199 - 99;
			x[i].ms = rand() % 199 - 99;
			TNode* p = createTNode(x[i]);
			insertTNode(bt.Root, p);
		}
	}
}
void createBTree_FromKeyboard(BTree& bt)
{
	int n;
	PS x;
	initBTree(bt);
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			printf("Nhap ts: "); scanf("%d", &x.ts);
			printf("Nhap ms: "); scanf("%d", &x.ms);
			TNode* p = createTNode(x);
			insertTNode(bt.Root, p);
		}
	}
}
void showMenu()
{
	printf("1.Tao cay PS Auto\n");
	printf("2.Tao cay PS bang mang\n");
	printf("3.Tao cay PS nhap tay\n");
	printf("4.Xuat cay PS\n");
}