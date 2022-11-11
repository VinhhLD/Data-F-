#include "Buoi6_BSTree_BTLop.h"
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
void showTSNode(TSNode *root)
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
void NRL(TSNode* root)
{
	if (root == NULL)
	{
		return;
	}
	showTSNode(root);
	NRL(root->Right);
	NRL(root->Left);
}
void LNR(TSNode* root)
{
	if (root == NULL)
	{
		return;
	}
	LNR(root->Left);
	showTSNode(root);
	LNR(root->Right);
}
void RNL(TSNode* root)
{
	if (root == NULL)
	{
		return;
	}
	RNL(root->Right);
	showTSNode(root);
	RNL(root->Left);
}
void LRN(TSNode *root)
{
	if (root == NULL)
	{
		return;
	}
	LRN(root->Left);
	LRN(root->Right);
	showTSNode(root);
}
void RLN(TSNode *root)
{
	if (root == NULL)
	{
		return;
	}
	RLN(root->Right);
	RLN(root->Left);
	showTSNode(root);
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
			printf("Gia tri vua tao la: %d\n", x);
			TSNode* p = createTSNode(x);
			insertTSNode(bst.Root, p);
		}
	}
}
void showMenu1()
{
	printf("1. Tao BST auto\n");
	printf("2. Xuat BST\n");
	printf("3. Tao BST bang Array\n");
	printf("4. Tao BST bang Keyboard\n");
	printf("5. Duyet theo chieu rong\n");
	printf("6. Duyet theo chieu sau\n");
	printf("7. Them 1 nut gia tri x\n");
	printf("8. Tim node co gia tri x trong cay\n");
	printf("9. Xoa nut co gia tri x tren cay\n");
	printf("10. Xuat pt theo chieu giam dan\n");
	printf("11. Xoa toan bo cay\n");
	printf("12. Tim node gia tri lon nhat\n");
	printf("13. Tim node gia tri nho nhat\n");
	printf("14. Dem pt lon hon x\n");
	printf("15. Tong gia tri duong trong cay\n");
	printf("16. Tong gia tri am trong cay\n");
}
void createBSTree_Array(BSTree& bst)
{
	int n;
	int *a = new int;
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
void createBSTree_Keyboard(BSTree& bst)
{
	int n;
	int x;
	initBSTree(bst);
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			printf("Nhap gia tri node: "); scanf("%d", &x);
			TSNode *p = createTSNode(x);
			insertTSNode(bst.Root, p);
		}
	}
}
bool isEmpty(BSTree bst)
{
	return bst.Root == NULL;
}
void traverseBreadthNLR(TSNode* root)
{
	if (root == NULL) return;
	queue<TSNode*> q;
	q.push(root);
	while (!q.empty())
	{
		TSNode *p;
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
TSNode *findTSNode(TSNode *root, int x)
{
	if (root == NULL)
		return NULL;
	if (root->Info == x)
		return root;
	if (x < root->Info)
		findTSNode(root->Left, x);
	else
		findTSNode(root->Right, x);
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
		TSNode *p = root;
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
			TSNode *q = findTSNodeReplace(p);
			delete q;
		}
		return 1;
	}
}
void deleteTree(TSNode*& root)
{
	if (root == NULL) return;
	deleteTree(root->Left);
	deleteTree(root->Right);
	delete root;
}
TSNode* MaxTSNode(TSNode *root)
{
	TSNode *p = root;
	while (p->Right != NULL)
	{
		p = p->Right;
	}
	return p;
}
TSNode* MinTSNode(TSNode* root)
{
	TSNode *p = root;
	while (p->Left != NULL)
	{
		p = p->Left;
	}
	return p;
}
int CountGreaterThanX(TSNode *root, int x)
{
	if (root == NULL)
		return 0;
	int nlx = CountGreaterThanX(root->Left, x);
	int nrx = CountGreaterThanX(root->Right, x);
	if (root->Info > x)
		return (1 + nlx + nrx);
	return (nlx + nrx);
}
int TongDuong(TSNode* root)
{
	if (root == NULL)
		return 0;
	int rootNode = root->Info;
	int nl = TongDuong(root->Left);
	int nr = TongDuong(root->Right);
	if (root->Info > 0 && rootNode > 0)
	{
		return (rootNode + nl + nr);
	}
	return (nl + nr);
}
int TongAm(TSNode* root)
{
	if (root == NULL)
		return 0;
	int rootNode = root->Info;
	int nl = TongAm(root->Left);
	int nr = TongAm(root->Right);
	if (root->Info < 0 && rootNode < 0)
	{
		return (rootNode + nl + nr);
	}
	return (nl + nr);
}
TSNodePS* createTSNodePS(PS x)
{
	TSNodePS* p = new TSNodePS;
	if (p == NULL)
	{
		return NULL;
	}
	p->Info = x;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void initBSTreePS(BSTreePS& bst)
{
	bst.Root = NULL;
}
int sosanhPS(PS x, PS y)
{
	double a = x.ts / x.ms;
	double b = y.ts / y.ms;
	if (a == b) return 0;
	if (a > b) return 1;
	if (a < b) return -1;
}
bool insertTSNodePS(TSNodePS*& root, TSNodePS* p)
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
	if (sosanhPS(root->Info, p->Info) == 0)
	{
		return false;
	}
	if (sosanhPS(root->Info, p->Info) == -1)
	{
		insertTSNodePS(root->Left, p);
		printf("Da them node %d/%d vao ben trai cua %d/%d\n", p->Info.ts, p->Info.ms, root->Info.ts, root->Info.ms);
	}
	else
	{
		insertTSNodePS(root->Right, p);
		printf("Da them node %d/%d vao ben phai cua %d/%d\n", p->Info.ts, p->Info.ms, root->Info.ts, root->Info.ms);
	}
	return true;
}
void createBSTreePS_Auto(BSTreePS& bstPS)
{
	int n;
	PS x;
	initBSTreePS(bstPS);
	srand((unsigned)time(NULL));
	printf("Nhap so luong pt: "); scanf("%d", &n);
	if (n == 0) return;
	else
	{
		for (int i = 0; i < n; i++)
		{
			x.ts = rand() % 199 - 99;
			x.ms = rand() % 199 - 99;
			printf("Gia tri vua tao la: %d/%d\n", x.ts, x.ms);
			TSNodePS* p = createTSNodePS(x);
			insertTSNodePS(bstPS.Root, p);
		}
	}
}
void showTSNodePS(TSNodePS *root)
{
	printf("%d/%d", root->Info.ts, root->Info.ms);
}
void NLRPS(TSNodePS* root)
{
	if (root == NULL)
	{
		return;
	}
	showTSNodePS(root);
	NLRPS(root->Left);
	NLRPS(root->Right);
}
void showMenu2()
{
	printf("1. Tao cay PS Auto\n");
	printf("2. Xuat cay PS NLR\n");
}