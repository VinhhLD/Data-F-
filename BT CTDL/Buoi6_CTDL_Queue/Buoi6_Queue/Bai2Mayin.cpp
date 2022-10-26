#include "Bai2Mayin.h"
QNode* createQNode(ItemType x)
{
	QNode* p = new QNode;
	if (p == NULL)
	{
		printf("Khong du bo nho de cap phat!");
		getch();
		return NULL;
	}
	p->Info = x;
	p->Next = NULL;
	return p;
}
void pushQ(Queue& qu, QNode* p)
{
	if (p != NULL)
	{
		if (qu.head == NULL)
		{
			qu.head = qu.tail = p;
		}
		else
		{
			qu.tail->Next = p;
			qu.tail = p;
		}
	}
}
QNode* popQ(Queue& qu)
{
	QNode* p = NULL;
	if (qu.head != NULL)
	{
		p = qu.head;
		qu.head = qu.head->Next;
		p->Next = NULL;
	}
	return p;
}
bool isEmpty(Queue qu)
{
	return qu.head == NULL;
}
void initQueue(Queue& qu)
{
	qu.head = qu.tail = NULL;
}
//void KhoiTao(char a[], char b[], char c[])
//{
//	//a = (char*)malloc(MAX * sizeof(char));
//	//b = (char*)malloc(MAX * sizeof(char));
//	//c = (char*)malloc(MAX * sizeof(char));
//	for (int i = 0; i < 10; i++)
//	{
//		fflush(stdin);
//		printf("Nhap pt a[%d]: ", i);
//		scanf("%c", &a[i]);
//		fflush(stdin);
//		printf("Nhap pt b[%d]: ", i); 
//		scanf("%c", &b[i]);
//		fflush(stdin);
//		printf("Nhap pt c[%d]: ", i); 
//		scanf("%c", &c[i]);
//		fflush(stdin);
//	}
//}
void KhoitaoDSin(Queue& qu, char a[], char b[], char c[], char d[])
{
	//d = (char*)malloc(MAX * sizeof(char));
	initQueue(qu);
	for (int i = 0; i < 10; i++)
	{
		int tta, ttb, ttc;
		tta = ttb = ttc = 0;
		int tt = rand() % 3;
		if (tt == 0)
		{
			d[i] = a[tta++];
		}
		else if (tt == 1)
		{
			d[i] = b[ttb++];
		}
		else if (tt == 2)
		{
			d[i] = c[ttc++];
		}
	}
	printf("DS cho in:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%-5c", d[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		QNode* p = createQNode(d[i]);
		pushQ(qu, p);
	}
	printf("\n");
	printf("Xuat thu tu in:\n");
	for (QNode* p = qu.head; p != NULL; p = p->Next)
	{
		printf("%-5c", p->Info);
	}
}
