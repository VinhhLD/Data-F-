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
void showMenu3()
{
	printf("1.Xuat cac so hoan thien trong cay\n");
	printf("2.Xuat cac nut tren tang thu k cua cay\n");
	printf("3.Xuat cac nut tren cay theo thu tu tang 0 den tang h - 1 cua cay\n");
	printf("4.Dem so luong nut la co gia tri chan\n");
	printf("5.Dem so luong nut co dung 1 con va la SNT trong cay\n");
	printf("6.Dem so luong nut co dung 2 con va la SCP trong cay\n");
	printf("7.Dem so luong nut nam o tang thap hon tang k trong cay\n");
	printf("8.Dem so luong nut nam o tang cao hon tang k trong cay\n");
	printf("9.Tinh tong cac nut le\n");
	printf("10.Tinh tong cac nut la co gia tri chan\n");
	printf("11.Tong cac nut co dung 1 con va la SNT trong cay\n");
	printf("12.Tong cac nut co dung 2 con va la SCP trong cay\n");
}
void SHT(TSNode* root)
{
	int sum = 0;
	if (root == NULL)
	{
		return;
	}
	if (root->Info <= 0)
	{
		return;
	}
	else
	{
		for (int i = 1; i < root->Info; i++)
		{
			if (root->Info % i == 0)
			{
				sum += i;
			}
		}
		if (sum == root->Info)
		{
			showTSNode(root);
		}
		SHT(root->Left);
		SHT(root->Right);
	}
}
void showTSNodeLevelK(TSNode* root, int k)
{
	if (root == NULL) return;
	if (k == 0)
	{
		showTSNode(root);
	}
	k--;
	showTSNodeLevelK(root->Left, k);
	showTSNodeLevelK(root->Right, k);
}
int CountTSNodeLevelK(TSNode* root, int k)
{
	if (root == NULL) return 0;
	if (k == 0)
	{
		return 1;
	}
	k--;
	int nl = CountTSNodeLevelK(root->Left, k);
	int nr = CountTSNodeLevelK(root->Right, k);
	return nl + nr;
}
int DemTangThapHonK(TSNode* root, int k)
{
	if (root != NULL)
	{
		int dem = 0;
		for (int i = 0; i < k; i++)
		{
			dem += CountTSNodeLevelK(root, i);
		}
		return dem;
	}
	return 0;
}
int DemTangCaoHonK(TSNode* root, int k)
{
	if (root != NULL)
	{
		int dem = 0;
		for (int i = k + 1; i <= hightBSTree(root); i++)
		{
			dem += CountTSNodeLevelK(root, i);
		}
		return dem;
	}
	return 0;
}
int hightBSTree(TSNode* root)
{
	if (root == NULL)
		return 0;
	int hl = hightBSTree(root->Left);
	int hr = hightBSTree(root->Right);
	if (hl > hr)
	{
		return (1 + hl);
	}
	return (1 + hr);
}
int CountTSNodeIsLeafEven(TSNode* root, int &count)
{
	if (root == NULL)
		return 0;
	int nl = CountTSNodeIsLeafEven(root->Left, count);
	int nr = CountTSNodeIsLeafEven(root->Right, count);
	if (root->Info % 2 == 0 && root->Left == NULL && root->Right == NULL)
	{
		count++;
	}
	return count;
}
bool SNT(TSNode *root)
{
	if (root->Info < 2)
	{
		return false;
	}
	else
	{
		int count = 1;
		for (int i = 2; i <= sqrt(root->Info); i++)
		{
			if (root->Info % i == 0)
			{
				count = 0;
				break;
			}
		}
		if (count == 1 && (root->Left != NULL && root->Right == NULL || root->Left == NULL && root->Right != NULL))
		{
			return true;
		}
	}
	return false;
}
int CountTSNodeHave1ChildIsSNT(TSNode* root, int &dem)
{
	if (root != NULL)
	{
		if (SNT(root) == true)
		{
			dem++;
		}
		CountTSNodeHave1ChildIsSNT(root->Left, dem);
		CountTSNodeHave1ChildIsSNT(root->Right, dem);
	}
	return dem;
}
int SumTSNodeHave1ChildIsSNT(TSNode* root, int& dem)
{
	if (root != NULL)
	{
		if (SNT(root) == true)
		{
			dem += root->Info;
		}
		SumTSNodeHave1ChildIsSNT(root->Left, dem);
		SumTSNodeHave1ChildIsSNT(root->Right, dem);
	}
	return dem;
}
bool SCP(TSNode* root)
{
	if (root->Info < 0)
	{
		return false;
	}
	if (root->Left == NULL || root->Right == NULL)
	{
		return false;
	}
	else
	{
		if (sqrt((float)root->Info) == (int)sqrt((float)root->Info) && root->Left != NULL && root->Right != NULL)
		{
			return true;
		}
	}
	return false;
}
int CountTSNodeHave2ChildIsSCP(TSNode* root, int &dem)
{
	if (root != NULL)
	{
		if (SCP(root) == true)
		{
			dem++;
		}
		CountTSNodeHave2ChildIsSCP(root->Left, dem);
		CountTSNodeHave2ChildIsSCP(root->Right, dem);
	}
	return dem;
}
int SumTSNodeHave2ChildIsSCP(TSNode* root, int& dem)
{
	if (root != NULL)
	{
		if (SCP(root) == true)
		{
			dem += root->Info;
		}
		SumTSNodeHave2ChildIsSCP(root->Left, dem);
		SumTSNodeHave2ChildIsSCP(root->Right, dem);
	}
	return dem;
}
int SumTSNodeOdd(TSNode* root)
{
	if (root == NULL)
		return 0;
	int rootNode = root->Info;
	int nl = SumTSNodeOdd(root->Left);
	int nr = SumTSNodeOdd(root->Right);
	if (root->Info % 2 != 0 && rootNode % 2 != 0)
	{
		return (rootNode + nl + nr);
	}
	return (nl + nr);
}
int SumTSNodeIsLeafEven(TSNode* root)
{
	if (root == NULL)
		return 0;
	int nl = SumTSNodeIsLeafEven(root->Left);
	int nr = SumTSNodeIsLeafEven(root->Right);
	if (root->Info % 2 == 0 && root->Left == NULL && root->Right == NULL)
	{
		return (root->Info + nl + nr);
	}
	return (nl + nr);
}