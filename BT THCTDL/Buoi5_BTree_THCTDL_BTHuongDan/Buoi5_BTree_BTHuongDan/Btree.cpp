#include "Btree.h"
TNode* createTNode(int x)
{
	TNode* p = new TNode;
	if (!p) return NULL;
	p->Info = x;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
bool insertTNodeLeft(TNode* T, int x)
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
bool insertTNodeRight(TNode* T, int x)
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
void initBtree(BTree& bt)
{
	bt.Root = NULL;
}
bool isEmpty(BTree bt)
{
	return bt.Root == NULL;
}
void showTNode(TNode* p)
{
	printf("%5d", p->Info);
}
void traverseNLR(TNode* root)
{
	if (root == NULL)
	{
		return;
	}
	showTNode(root);
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
	initBtree(bt);
	srand((unsigned)time(NULL));
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			int x = rand() % 199 - 99;
			TNode* p = createTNode(x);
			insertTNode(bt.Root, p);
		}
	}
}
void showMenu()
{
	printf("1.Nhap cay nhi phan auto\n");
	printf("2.Xuat cay nhi phan\n");
	printf("3.Dem so nut tren cay\n");
	printf("4.Dem so nut la tren cay\n");
	printf("5.Dem so nut co gia tri bang x\n");
	printf("6.Tinh tong cac gia tri tren cay\n");
	printf("7.Xoa nut con ben trai\n");
	printf("8.Xoa nut con ben phai\n");
	printf("9.Tinh chieu cao cua cay\n");
}
TNode* findTNode(TNode *root, int x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->Info == x)
	{
		return root;
	}
	TNode* p = findTNode(root->Left, x);
	if (p != NULL)
	{
		return p;
	}
	return findTNode(root->Right, x);
}
bool isLeaf(TNode* p)
{
	if (p == NULL)
		return false;
	if ((p->Left && p->Right) == NULL)
		return true;
	return false;
}
bool deleteTNodeLeft(TNode* T)
{
	if (T == NULL)
	{
		return false;
	}
	TNode* p = T->Left;
	if (p == NULL)
	{
		return false;
	}
	if (p->Left != NULL || p->Right != NULL)
	{
		return false;
	}
	else
	{
		p->Left = NULL;
		delete p;
	}
	return true;
}
bool deleteTNodeRight(TNode* T)
{
	if (T == NULL)
	{
		return false;
	}
	TNode* p = T->Right;
	if (p == NULL)
	{
		return false;
	}
	if (p->Left != NULL || p->Right != NULL)
	{
		return false;
	}
	else
	{
		p->Right = NULL;
		delete p;
	}
	return true;
}
int countTNode(TNode* root)
{
	if (!root) return 0;
	int nl = countTNode(root->Left);
	int nr = countTNode(root->Right);
	return (1 + nl + nr);
}
int countTNodeLeaf(TNode* root)
{
	if (!root) return 0;
	if (root->Left && root->Right == NULL)
		return 1;
	int cnl = countTNodeLeaf(root->Left);
	int cnr = countTNodeLeaf(root->Right);
	if (!root->Left && !root->Right)
	{
		return (1 + cnl + cnr);
	}
	return (cnl + cnr);
}
int countTNodebchild(TNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if ((root->Left && root->Right) == NULL)
		return 0;
	int cnl = countTNodebchild(root->Left);
	int cnr = countTNodebchild(root->Right);
	return (1 + cnl + cnr);
}
int sumTNode(TNode* root)
{
	if (root == NULL)
		return 0;
	int suml = sumTNode(root->Left);
	int sumr = sumTNode(root->Right);
	return (root->Info + suml + sumr);
}
int highTree(TNode* root)
{
	if (root == NULL)
		return 0;
	int hl = highTree(root->Left);
	int hr = highTree(root->Right);
	if (hl > hr)
		return (1 + hl);
	else
		return (1 + hr);
}
int DemNodeX(TNode* root, int &dem, int x)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->Info == x)
	{
		dem++;
	}
	DemNodeX(root->Left, dem, x);
	DemNodeX(root->Right, dem, x);
	return dem;
}