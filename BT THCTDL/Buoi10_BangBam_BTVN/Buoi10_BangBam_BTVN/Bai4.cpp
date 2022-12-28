//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<conio.h>
//#include<iostream>
//#include<fstream>
//#include<string.h>
//using namespace std;
//
//#define MAXSIZE 26
//
//typedef char ItemType;
//struct HashNode
//{
//	ItemType key[21];
//	HashNode* next;
//};
//HashNode* bucket[MAXSIZE];
//
//void createHashTable();
//void traverse();
//void pop(int b, ItemType x[]);
//
//void main()
//{
//	ItemType x[21];
//	createHashTable();
//	traverse();
//	pop(0, x);
//	printf("\n%s\n\n", x);
//	traverse();
//	_getch();
//}
//
//int layKiTuDau(ItemType x[])
//{
//	return x[0] - 65;
//}
//int hashFunction(ItemType k)
//{
//	return k % MAXSIZE;
//}
//void initBucket()
//{
//	for (int i = 0; i < MAXSIZE; i++)
//		bucket[i] = NULL;
//}
//void push(int b, ItemType k[])
//{
//	HashNode* p = new HashNode;
//	strcpy(p->key, k);
//	p->next = bucket[b];
//	bucket[b] = p;
//}
//void insertAfter(HashNode* p, ItemType k[])
//{
//	if (!p)
//	{
//		printf("Khong the them");
//		return;
//	}
//	HashNode* q = new HashNode;
//	strcpy(q->key, k);
//	q->next = p->next;
//	p->next = q;
//}
//void place(int b, ItemType k[])
//{
//	HashNode *p, *q;
//	q = NULL;
//	for (p = bucket[b]; p && layKiTuDau(k) > layKiTuDau(p->key); p = p->next)
//	{
//		q = p;
//	}
//	if (!q)
//		push(b, k);
//	else
//		insertAfter(q, k);
//}
//void insert(ItemType k[])
//{
//	int b;
//	b = hashFunction(layKiTuDau(k));
//	place(b, k);
//}
//bool isEmpty(int b)
//{
//	if (bucket[b] == NULL)
//		return true;
//	return false;
//}
//void pop(int b, ItemType x[])
//{
//	HashNode* p, * q;
//	if (isEmpty(b) == true)
//	{
//		printf("Bucket thu %d rong, khong the xoa dau!!!", b);
//		return;
//	}
//	p = bucket[b];
//	strcpy(x, p->key);
//	bucket[b] = bucket[b]->next;
//	delete p;
//}
//HashNode* deleteAfter(HashNode *p)
//{
//	HashNode* h, * k;
//	if (!p || !p->next)
//		return NULL;
//	h = k = p->next;
//	p->next = h->next;
//	delete h;
//	return k;
//}
//void createHashTable()
//{
//	ItemType x[21];
//	ifstream in;
//	const char* fileName = "Data_TuDien.txt";
//	in.open(fileName);
//	if (in)
//	{
//		while (!in.eof())
//		{
//			in >> x;
//			insert(x);
//		}
//	}
//	in.close();
//}
//void traverseBucket(int b)
//{
//	for (HashNode* p = bucket[b]; p != NULL; p = p->next)
//	{
//		printf("%s\t\t", p->key);
//	}
//}
//void traverse()
//{
//	for (int i = 0; i < MAXSIZE; i++)
//	{
//		if (bucket[i] != NULL)
//		{
//			printf("|%d|: ", i);
//			traverseBucket(i);
//			printf("\n");
//		}
//	}
//}