//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<conio.h>
//#define MAXSIZE 101
//
//struct CapSo
//{
//	int a, b;
//};
//typedef CapSo ItemType;
//struct HashNode
//{
//	ItemType key;
//	HashNode* next;
//};
//HashNode* bucket[MAXSIZE];
//
//void createHashTable(int &n);
//void traverse();
//void traverseBucket(int b);
//void initBucket();
//
//void main()
//{
//	int n, k;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	initBucket();
//	createHashTable(n);
//	traverse();
//	printf("\n\n");
//	printf("Nhap k: ");
//	scanf("%d", &k);
//	printf("Cac cap so co tong bang %d la\n", k);
//	traverseBucket(k);
//	_getch();
//}
//
//int hashFuction(ItemType x)
//{
//	return ((x.a + x.b) % MAXSIZE);
//}
//void ganStruct(ItemType &x, ItemType &y)
//{
//	x.a = y.a;
//	x.b = y.b;
//}
//void initBucket()
//{
//	for (int i = 1; i < MAXSIZE; i++)
//		bucket[i] = NULL;
//}
//void push(int b, ItemType x)
//{
//	HashNode* p = new HashNode;
//	ganStruct(p->key, x);
//	p->next = bucket[b];
//	bucket[b] = p;
//}
//void insertAfter(HashNode* p, ItemType x)
//{
//	if (!p)
//	{
//		printf("Khong ton tai node %d-%d, khong the them!!!", p->key.a, p->key.b);
//		return;
//	}
//	HashNode* q = new HashNode;
//	ganStruct(q->key, x);
//	q->next = p->next;
//	p->next = q;
//}
//void place(int b, ItemType x)
//{
//	HashNode* q;
//	q = NULL;
//	for (HashNode *p = bucket[b]; p != NULL; p = p->next)
//		q = p;
//	if (!q)
//		push(b, x);
//	else
//		insertAfter(q, x);
//}
//void Insert(ItemType x)
//{
//	int b;
//	b = hashFuction(x);
//	place(b, x);
//}
//bool isEmpty(int b)
//{
//	if (bucket[b] == NULL)
//		return true;
//	return false;
//}
//void traverseBucket(int b)
//{
//	for (HashNode* p = bucket[b]; p != NULL; p = p->next)
//	{
//		printf("[%d--%d]\t", p->key.a, p->key.b);
//	}
//}
//void traverse()
//{
//	for (int i = 1; i < MAXSIZE; i++)
//	{
//		printf("|%d| = ", i);
//		traverseBucket(i);
//		printf("\n");
//	}
//}
//void createHashTable(int &n)
//{
//	ItemType x;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			x.a = i;
//			x.b = j;
//			Insert(x);
//		}
//	}
//}