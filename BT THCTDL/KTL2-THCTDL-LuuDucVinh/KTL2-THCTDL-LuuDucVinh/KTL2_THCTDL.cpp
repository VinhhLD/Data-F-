#include "KTL2_THCTDL.h"
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
bool insertTSNode(TSNode*& root, TSNode* p)
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
	if (root->Info == p->Info)
	{
		return false;
	}
	if (p->Info < root->Info)
	{
		insertTSNode(root->Left, p);
		printf("Da them node %d vao ben trai cua %d\n", p->Info, root->Info);
	}
	else
	{
		insertTSNode(root->Right, p);
		printf("Da them node %d vao ben phai cua %d\n", p->Info, root->Info);
	}
	return true;
}
void showTSNode(TSNode* root)
{
	printf("%5d", root->Info);
}
void NLR(TSNode* root)
{
	if (root == NULL)
	{
		return;
	}
	showTSNode(root);
	NLR(root->Left);
	NLR(root->Right);
}
bool isEmpty(BSTree bst)
{
	return bst.Root == NULL;
}
void docFile(FILE*& f, BSTree &bst)
{
	int n;
	int x;
	initBSTree(bst);
	f = fopen("file.txt", "rt");
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%d", &x);
		TSNode* p = createTSNode(x);
		insertTSNode(bst.Root, p);
	}
}
void showMenu()
{
	printf("1.Nhap file\n");
	printf("2.Xuat file\n");
	printf("3.Duyet cay theo chieu rong\n");
	printf("4.Tinh tong cac nut co gia tri la boi so cua x\n");
	printf("5.Dem so nut khong phai nut la va la boi so cua 3 o tang thu k\n");
	printf("6.Xuat ra man hinh so hoan hao lon nhat tren cay. Neu cay ko co so hoan hao thi xuat (Cay ko chua so hoan hao)\n");
	printf("7.Xoa nut co gia tri la boi so cua y\n");
}
void traverseBreadthNLR(TSNode* root)
{
	if (root == NULL) return;
	queue<TSNode*> q;
	q.push(root);
	while (!q.empty())
	{
		TSNode* p;
		p = q.front();
		q.pop();
		showTSNode(p);
		if (p->Left != NULL)
		{
			q.push(p->Left);
		}
		if (p->Right != NULL)
		{
			q.push(p->Right);
		}
	}
}
int CountBoisocuaX(TSNode* root, int x)
{
	if (root == NULL)
	{
		return 0;
	}
	int rootNode = root->Info;
	int nlx = CountBoisocuaX(root->Left, x);
	int nrx = CountBoisocuaX(root->Right, x);
	if (root->Info % x == 0 && rootNode % x == 0)
	{
		return (rootNode + nlx + nrx);
	}
	return nlx + nrx;
}
int CountTSNodeIsNoLeafLevelK(TSNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 0 && (root->Left != NULL || root->Right != NULL) && root->Info % 3 == 0)
	{
		return 1;
	}
	k--;
	int nlx = CountTSNodeIsNoLeafLevelK(root->Left, k);
	int nrx = CountTSNodeIsNoLeafLevelK(root->Right, k);
	return (nlx + nrx);
}
bool SHH(long n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
		return true;
	return false;
}
TSNode* MaxSHH(TSNode* root, TSNode*& max)
{
	if (root != NULL)
	{
		if (max != NULL)
		{
			if (SHH(root->Info) == true && root->Info > max->Info)
			{
				max = root;
			}
		}
		if (max == NULL && SHH(root->Info) == true)
		{
			max = root;
		}
		MaxSHH(root->Left, max);
		MaxSHH(root->Right, max);
	}
	if (max == NULL)
		return NULL;
	return max;
}
TSNode* findTSNodeReplace(TSNode*& p)
{
	TSNode* f = p;
	TSNode* q = p->Right;
	while (q->Left != NULL)
	{
		f = q;
		q = q->Left;
	}
	p->Info = q->Info;
	if (f == p)
	{
		f->Right = q->Right;
	}
	else
	{
		f->Left = q->Right;
	}
	return q;
}
int deleteTSNodeX(TSNode*& root, int x)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->Info > x)
	{
		return deleteTSNodeX(root->Left, x);
	}
	else if (root->Info < x)
	{
		return deleteTSNodeX(root->Right, x);
	}
	else
	{
		TSNode* p = root;
		if (root->Left == NULL)
		{
			root = root->Right;
			delete p;
		}
		else if (root->Right == NULL)
		{
			root = root->Left;
			delete p;
		}
		else
		{
			TSNode* q = findTSNodeReplace(p);
			delete q;
		}
		return 1;
	}
}
void xoaNodeBoiY(TSNode* root, int y, TSNode *p)
{
	if (root == NULL)
		return;
	xoaNodeBoiY(root->Left, y, p);
	xoaNodeBoiY(root->Right, y, p);
	if (root->Info % y == 0)
	{
		deleteTSNodeX(p, root->Info);
	}
}