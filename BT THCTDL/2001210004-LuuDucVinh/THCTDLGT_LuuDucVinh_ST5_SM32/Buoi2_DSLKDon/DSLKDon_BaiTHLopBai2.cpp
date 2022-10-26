#include "DSLKDon_BaiTHLopBai2.h"
Node *creatSNode(BaiHat x)
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
void showNode(Node *p)
{
	printf("%-25s%-15s%-15s%-15d\n", p->Info.TenBH, p->Info.Tacgia, p->Info.Casi, p->Info.thoigian);
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
		printf("%-25s%-15s%-15s%-15s\n", "Baihat", "TacGia", "CaSi", "ThoiLuong");
		for (Node *p = l.head; p != NULL; p = p->Next)
		{
			showNode(p);
		}
		printf("\n");
	}
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
void docFile(FILE *&f, SList &l)
{
	BaiHat x;
	l.head = l.tail = NULL;;
	f = fopen("file2.txt", "rt");
	while (!feof(f))
	{
		fscanf(f, "%s%s%s%d", &x.TenBH, &x.Tacgia, &x.Casi, &x.thoigian);
		Node *q = creatSNode(x);
		insertHead(l, q);
	}
}
void showMenu()
{
	printf("1.Doc file\n");
	printf("2.Xuat\n");
	printf("3.Thoi gian de nghe het tat ca bai hat trong danh sach\n");
	printf("4.Them 1 bai hat vao dau/cuoi\n");
	printf("5.Xoa 1 bai nhac khoi danh sach\n");
	printf("6.Kiem tra xem bai hat co ten X co trong danh sach ko\n");
	printf("7.Sap xep danh sach giam dan theo ten ca si\n");
	printf("8.Dua 1 bai hat trong danh sach len dau\n");
}
int TongTgian(SList l)
{
	int Sum = 0;
	for (Node *p = l.head; p != NULL; p = p->Next)
	{
		Sum += p->Info.thoigian;
	}
	return Sum;
}
bool deletetHead(SList &l)
{
	if (l.head == NULL) return false;
	else
	{
		Node *p = l.head;
		l.head = p->Next;
		p->Next = NULL;
		delete p;
	}
	return true;
}
bool deleteTail(SList& l)
{
	if (l.head == NULL) return false;
	else
	{
		Node* p = l.tail;
		Node* q = l.head;
		while (q != l.tail)
		{
			q = q->Next;
		}
		l.tail = q;
		l.tail->Next = NULL;
		delete p;
	}
	return true;
}
bool deleteAfter(SList &l, Node* q)
{
	if (q == NULL || q->Next == NULL) return false;
	else
	{
		Node* p = q->Next;
		q->Next = p->Next;
		if (l.tail == p)
		{
			l.tail = q;
		}
		delete p;
	}
	return true;
}
Node* findSNode(SList l, char x[])
{
	for (Node* p = l.head; p != NULL; p = p->Next)
	{
		if (stricmp(p->Info.TenBH, x) == 0)
		{
			return p;
		}
	}
	return NULL;
}
void deleteX(SList& l)
{
	Node* q;
	char x[51];
	printf("Nhap ten bai hat can xoa: "); scanf("%s", x);
	q = findSNode(l, x);
	if (q != NULL)
	{
		Node* p = l.head;
		Node* r = p;
		while (p != NULL)
		{
			if (stricmp(p->Info.TenBH, x) == 0)
			{
				if (p == l.head)
				{
					deletetHead(l);
					p = l.head;
				}
				else if (p == l.tail)
				{
					deleteTail(l);
					l.tail = r;
					l.tail->Next = NULL;
					p = NULL;
				}
				else
				{
					r->Next = p->Next;
					p->Next = NULL;
					delete p;
					p = r->Next;
				}
			}
			else
			{
				r = p;
				p = p->Next;
			}
		}
		printf("Da xoa bai hat %s thanh cong\n", x);
	}
	else
	{
		printf("Khong tim thay bai %s trong danh sach\n", x);
	}
}
void swap(BaiHat &x, BaiHat &y)
{
	BaiHat temp = x;
	x = y;
	y = temp;
}
void Giam_InterchangeSortSList(SList &l)
{
	for (Node* p = l.head; p != l.tail; p = p->Next)
	{
		for (Node* q = p->Next; q != NULL; q = q->Next)
		{
			if (strcmp(q->Info.Casi, p->Info.Casi) < 0)
			{
				swap(p->Info, q->Info);
			}
		}
	}
}
void DuaBaiHatLenDau(SList& l)
{
	char x[51];
	printf("Nhap ten bai hat: "); scanf("%s", x);
	Node* p = l.head;
	Node* r = p;
	while (p != NULL && p != findSNode(l, x))
	{
		r = p;
		p = p->Next;
	}
	if (p == NULL)
	{
		printf("Khong tim thay %s trong danh sach\n", x);
	}
	else if (p == l.tail)
	{
		Node *x = l.head;
		l.head = p;
		l.head->Next = x;
		l.tail = r;
		l.tail->Next = NULL;
	}
	else if (r == l.head)
	{
		l.head = p;
		r->Next = p->Next;
		l.head->Next = r;
	}
	else
	{
		Node* x = l.head;
		l.head = p;
		r->Next = p->Next;
		l.head->Next = x;
	}
}