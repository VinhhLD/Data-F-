//#include"Header.h"
//
//void menu()
//{
//	printf("0. Exit\n");
//	printf("1. NLR chieu xau(deapth) \n");
//	printf("2. NLR chieu rong(breadth) \n");
//	printf("3. Delete 1 node have value x \n");
//	printf("4. ADD 1 NODE HAVE VALUE Y\n");
//	printf("5. Find Node have value x (yes/no)\n");
//	printf("6. output decrease\n");
//	printf("7. OUTPUT LEVEL K\n");
//	printf("8. SUM ALL NODE LEVEL K\n");
//	printf("9. FIND MAX\n");
//	printf("10. value closest to x\n");
//}
//void process()
//{
//	int choose;
//	FILE* f;
//	BtreeSearch b;
//	Bnode* p;
//	int n, a;
//	int sum = 0;
//	do
//	{
//		printf("Nhap vao bai can lam \n");
//		scanf_s("%d", &choose);
//		switch (choose)
//		{
//		case 0:
//			printf("thoat chuong trinh");
//			break;
//		case 1:
//			b.root = NULL;
//			f = fopen("mang1chieu.txt", "rt");
//			docFile(f, b);
//			printf("\n CAC PHAN TU TRONG CAY \n");
//			traverseNLR(b.root);
//			printf("\n");
//			break;
//		case 2:
//			traverseBreadthNLR(b.root);
//			printf("\n");
//			break;
//		case 3:
//			printf("nhap x de tim boi so cua no\n");
//			scanf("%d",&a);
//			printf("tong boi cua %d co trong cay la :%d\n",a,tinhTongBoiX(b.root,a));
//			break;
//		case 4:
//			printf("nhap bac k de dem boi cua 3 \n");
//			scanf("%d", &a);
//			printf("boi cua 3 o tang thu %d la :%d", a, demNodeKoPhaiLaOTangThuKBoiCua3(b.root, a));
//			break;
//		case 5:
//		{
//			Bnode* max = NULL;
//			Bnode* shh = MaxSHH(b.root, max);
//			if (shh == NULL)
//			{
//				printf("khong co so hoan hao\n");
//			}
//			else
//				printf(" max so hoan hao la :%d", shh->info);
//			break;
//		}
//		case 6:
//			p = b.root;
//			printf("nhap boi cua so can xoa\n");
//			scanf("%d", &a);
//			xoaNodeBoiY(b.root, a,p);
//			traverseNLR(b.root);
//			printf("\n");
//			break;
//		default:
//			printf("chua khoi tao chuc nang");
//			break;
//		}
//	} while (choose!=0);
//
//
//
//}
//Bnode* createBnode(int x)
//{
//	Bnode* p = new Bnode;
//	p->info = x;
//	p->left = NULL;
//	p->right = NULL;
//	return p;
//}
//
//void docFile(FILE* f, BtreeSearch& b)
//{
//	int n;
//	int a[100];
//	fscanf(f, "%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(f, "%d", &a[i]);
//		Bnode* p = createBnode(a[i]);
//		insertTNode(b.root, p);
//	}
//	fclose(f);
//}
//void showBnode(Bnode* p)
//{
//	printf("%5d", p->info);
//}
//
//void traverseNLR(Bnode* B)
//{
//	if (B == NULL)
//		return;
//	showBnode(B);
//	traverseNLR(B->left);
//	traverseNLR(B->right);
//}
//
//
//void delete1Node(Bnode*& t, int x)
//{
//	if (t)
//	{
//		if (x > t->info)
//			delete1Node(t->right, x);
//		else if (x < t->info)
//			delete1Node(t->left, x);
//		else
//		{
//			Bnode* p = t;
//			if (t->left == NULL)
//			{
//				t = t->right;
//			}
//			else
//			{
//				if (t->right == NULL)
//				{
//
//					t = t->left;
//				}
//				else
//				{
//					findAndReplace1(p, t->right);
//				}
//			}
//			delete p;
//		}
//	}
//	else
//		printf("khong tim thay phan tu %d", x);
//}
//void findAndReplace1(Bnode*& p, Bnode*& root)
//{
//	if (root->left)
//	{
//		findAndReplace1(p, root->left);
//	}
//	else
//	{
//		p->info = root->info;
//		p = root;
//		root = root->right;
//	}
//}
//int insertTNode(Bnode*& root, Bnode* p)
//{
//	if (p == NULL)
//		return 0;
//	if (root == NULL)
//	{
//		root = p;
//		return 1;
//	}
//	if (root->info > p->info)
//	{
//		printf("\n Them %d vao ben trai %d", p->info, root->info);
//		insertTNode(root->left, p);
//	}
//	else if (root->info < p->info)
//	{
//		printf("\n Them %d vao ben phai %d", p->info, root->info);
//		insertTNode(root->right, p);
//	}
//	else
//	{
//		return 0;
//	}
//	return 1;
//}
//
//
//void showNodeLevelK(Bnode* root, int k)
//{
//	if (root == NULL)
//		return;
//	if (k == 0)
//		printf("%d", root->info);
//	k--;
//	showNodeLevelK(root->left, k);
//	showNodeLevelK(root->right, k);
//}
//
//int sumNodeLevelK(Bnode* root, int k)
//{
//	if (root == NULL)
//		return 0;
//	if (k == 0)
//		return root->info;
//	k--;
//	int a = sumNodeLevelK(root->left, k);
//	int b = sumNodeLevelK(root->right, k);
//	return a + b;
//}
//
//
//
//void traverseBreadthNLR(Bnode* root)
//{
//	if (!root) return;
//	queue <Bnode*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Bnode* p;
//		p = q.front();
//		q.pop();
//		showBnode(p);
//		if (p->left != NULL)
//			q.push(p->left);
//		if (p->right != NULL)
//			q.push(p->right);
//	}
//}
//
//
//Bnode* findNode(Bnode* root, int x)
//{
//	if (root == NULL)
//		return NULL;
//	if (root->info == x)
//	{
//		return root;
//	}
//	if (root->info > x)
//		findNode(root->left, x);
//	if (root->info < x)
//		findNode(root->right, x);
//}
//
//int tinhTongBoiX(Bnode* root, int x)
//{
//	if (root == NULL)
//		return 0;
//	int valueroot = root->info;
//	int sumL = tinhTongBoiX(root->left, x);
//	int sumR = tinhTongBoiX(root->right, x);
//	if (root->info % x == 0 && valueroot%x==0)
//		return root->info + sumL + sumR;
//	return sumL + sumR;
//}
//
//int demNodeKoPhaiLaOTangThuKBoiCua3(Bnode* root, int k)
//{
//	if (root == NULL)
//		return 0;
//	if (k == 0)
//	{
//		if (root->left == NULL && root->right == NULL&&root->info%3==0)
//			return 1;
//	}
//	k--;
//	int countL = demNodeKoPhaiLaOTangThuKBoiCua3(root->left, k);
//	int countR = demNodeKoPhaiLaOTangThuKBoiCua3(root->right, k);
//	return countR + countL;
//}
//
//int checkHoanHao(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n/2; i++)
//	{
//		if (n % i == 0)
//			sum += i;
//	}
//	if (sum == n)
//		return 1;
//	return 0;
//}
//
//
//
//Bnode* MaxSHH(Bnode* root, Bnode*&max)
//{
//	if (root != NULL)
//	{
//		if (max != NULL)
//		{
//			if (checkHoanHao(root->info) == 1 && root->info > max->info)
//			{
//				max = root;
//			}
//		}
//		if (max ==NULL &&checkHoanHao(root->info) == 1)
//		{
//			max = root;
//		}
//		MaxSHH(root->left, max);
//		MaxSHH(root->right, max);
//	}
//	if (max == NULL)
//		return NULL;
//	return max;
//}
//
//
//void xoaNodeBoiY(Bnode* root,int x,Bnode* proot)
//{
//	if (root == NULL)
//		return;
//	xoaNodeBoiY(root->left, x, proot);
//	xoaNodeBoiY(root->right, x, proot);
//	if (root->info % x == 0)
//	{
//		delete1Node(proot, root->info);
//	}
//}