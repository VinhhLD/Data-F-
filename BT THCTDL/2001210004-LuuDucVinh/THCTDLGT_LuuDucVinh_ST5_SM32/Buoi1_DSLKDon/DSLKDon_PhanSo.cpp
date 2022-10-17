#include "DSLKDon_PhanSo.h"
Node *creatSNode(ItemType x)
{
	Node *p = new Node;
	if (p == NULL)
	{
		printf("Ko du bo nho de cap phat!");
		getch();
		return NULL;
	}
	p->Info = x;
	p->Next = NULL;
	return p;
}
void creatSList_Auto(SList &l)
{
	int n;
	Node *q;
	printf("Nhap so luong pt: "); scanf("%d", &n);
	srand((unsigned)time(NULL));
	l.head = l.tail = NULL;
	for (int i = 0; i < n; i++)
	{
		ItemType x;
		x.ts = rand() % 199 - 100;
		x.ms = rand() % 199 - 100;
		if (x.ms == 0)
		{
			x.ms = 1;
		}
		q = creatSNode(x);
		if (q == NULL)
		{
			printf("Ko du bo nho de cap phat");
			return;
		}
		if (l.head == NULL)
		{
			l.head = l.tail = q;
		}
		else
		{
			l.tail->Next = q;
			l.tail = q;
		}
	}
}
void showNode(Node *p)
{
	printf("%5d/%d", p->Info.ts, p->Info.ms);
}
bool lEmpty(SList l)
{
	return l.head == NULL;
}
void showSList(SList l)
{
	if (lEmpty(l) == true)
	{
		printf("Danh sach rong\n");
		return;
	}
	else
	{
		printf("Noi dung danh sach la:\n");
		for (Node *p = l.head; p != NULL; p = p->Next)
		{
			showNode(p);
		}
		printf("\n");
	}
}
void showMenu()
{
	printf("1.Nhap DSLK\n");
	printf("2.Xuat DSLK\n");
	printf("3.Them 1 node vao head\n");
	printf("4.Them 1 node vao tail\n");
	printf("5.Them node p vao truoc node q\n");
}
bool insertHead(SList &l, Node *p)
{
	if (p == NULL) return false;
	if (lEmpty(l) == true)
	{
		l.head = p;
		l.tail = p;
	}
	else
	{
		p->Next = l.head;
		l.head = p;
	}
	return true;
}
bool insertTail(SList &l, Node *p)
{
	if (p == NULL) return false;
	if (lEmpty(l) == true)
	{
		l.head = p;
		l.tail = p;
	}
	else
	{
		l.tail->Next = p;
		l.tail = p;
	}
	return true;
}
bool insertBefore(SList &l, Node *p, Node *q)
{
	if (p == NULL || q == NULL) return false;
	else
	{
		Node *r = l.head;
		while (r->Next != q)
		{
			r = r->Next;
		}
		r->Next = p;
		p->Next = q;
	}
	return true;
}
Node *findSNode (SList l, ItemType x)
{
	for (Node *p = l.head; p != NULL; p = p->Next)
	{
		if (p->Info.ts == x.ts && p->Info.ms == x.ms)
		{
			return p;
		}
	}
	return NULL;
}
