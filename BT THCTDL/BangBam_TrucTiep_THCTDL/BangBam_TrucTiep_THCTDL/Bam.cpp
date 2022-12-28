//#include "Bam.h"
//int HashFunction(int Key)
//{
//	return Key % KEYSIZE;
//}
//void initBucket()
//{
//	for (int i = 0; i < KEYSIZE; i++)
//	{
//		bucket[i] = NULL;
//	}
//}
//bool IsEmptyBucket(int b)
//{
//	return bucket[b] == NULL;
//}
//void Push(int b, int x)
//{
//	HashNode* p = new HashNode;
//	p->Key = x;
//	p->Next = bucket[b];
//	bucket[b] = p;
//}
//void InsertAfter(HashNode* p, int k)
//{
//	if (p == NULL)
//	{
//		printf("Khong the them vao node moi duoc\n");
//	}
//	else
//	{
//		HashNode* q = new HashNode;
//		q->Key = k;
//		q->Next = p->Next;
//		p->Next = q;
//	}
//}
//void Place(int b, int k)
//{
//	HashNode* q, *p;
//	q = NULL;
//	for (p = bucket[b]; p != NULL && k > p->Key; p = p->Next)
//	{
//		q = p;
//	}
//	if (q == NULL)
//	{
//		Push(b, k);
//	}
//	else
//	{
//		InsertAfter(q, k);
//	}
//}
//bool IsEmpty()
//{
//	for (int b = 0; b < KEYSIZE; b++)
//	{
//		if (bucket[b] != NULL)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//void Insert(int k)
//{
//	int b = HashFunction(k);
//	Place(b, k);
//}
//void FreeNode(HashNode* p)
//{
//	delete p;
//}
//int Pop(int b)
//{
//	HashNode* p;
//	int k;
//	if (IsEmptyBucket(b))
//	{
//		printf("Bucket %d bi rong, ko xoa dc", b);
//		return 0;
//	}
//	p = bucket[b];
//	k = p->Key;
//	bucket[b] = p->Next;
//	FreeNode(p);
//	return k;
//}
//int DeleteAfter(HashNode* p)
//{
//	HashNode* q;
//	int k;
//	if (p == NULL || p->Next == NULL)
//	{
//		printf("Khong xoa node duoc\n");
//		return 0;
//	}
//	q = p->Next;
//	k = q->Key;
//	p->Next = q->Next;
//	FreeNode(q);
//	return k;
//}
//void Remove(int k)
//{
//	HashNode* q = NULL, * p;
//	int b = HashFunction(k);
//	p = bucket[b];
//	while (p != NULL && p->Key != k)
//	{
//		q = p;
//		p = p->Next;
//	}
//	if (p == NULL)
//	{
//		printf("Khong co nut co khoa %d\n", k);
//	}
//	else if (p == bucket[b])
//	{
//		Pop(b);
//	}
//	else
//	{
//		DeleteAfter(q);
//	}
//}
//void ClearBucket(int b)
//{
//	HashNode* q, * p;
//	q = NULL;
//	p = bucket[b];
//	while (p != NULL)
//	{
//		q = p;
//		p = p->Next;
//		FreeNode(q);
//	}
//	bucket[b] = NULL;
//}
//void Clear()
//{
//	for (int b = 0; b < KEYSIZE; b++)
//	{
//		ClearBucket(b);
//	}
//}
//void TraverseBucket(int b)
//{
//	HashNode* p = bucket[b];
//	while (p != NULL)
//	{
//		printf("%5d", p->Key);
//		p = p->Next;
//	}
//}
//void Traverse()
//{
//	for (int b = 0; b < KEYSIZE; b++)
//	{
//		printf("Bucket thu %d: ", b);
//		TraverseBucket(b);
//	}
//}
//HashNode* Search(int k)
//{
//	int b = HashFunction(k);
//	HashNode* p = bucket[b];
//	while ((k > p->Key) && (p != NULL))
//	{
//		p = p->Next;
//	}
//	if (p == NULL || k != p->Key)
//	{
//		return NULL;
//	}
//	return p;
//}
//void showMenu()
//{
//	printf("1. Tao bang bam tu ban phim\n");
//	printf("2. Tao bang bam tu doc file\n");
//	printf("3. Xuat bang bam\n");
//	printf("4. Tim pt co trong bang bam ko\n");
//	printf("5. Xoa pt trong bang bam\n");
//}
//void createHashTableKeyboard(int& n)
//{
//	printf("Nhap so luong pt: "); scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		printf("Nhap gia tri pt thu %d: ", i); scanf("%d", &k);
//		Insert(k);
//	}
//}