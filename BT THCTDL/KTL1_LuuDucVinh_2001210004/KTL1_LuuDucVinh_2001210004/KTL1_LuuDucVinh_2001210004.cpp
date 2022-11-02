#include "KTL1_LuuDucVinh_2001210004.h"
Node *createSNode(HocVien x)
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
void initSList(SList &l)
{
	l.head = l.tail = NULL;
}
bool isEmpty(SList l)
{
	return l.head == NULL;
}
bool insertHead(SList& l, Node *p)
{
	if (p == NULL)
	{
		return false;
	}
	else
	{
		if (isEmpty(l) == true)
		{
			l.head = l.tail = p;
		}
		else
		{
			p->Next = l.head;
			l.head = p;
		}
	}
	return true;
}
void docFile(FILE *&f, SList &l)
{
	HocVien x;
	initSList(l);
	f = fopen("HocVien.txt", "rt");
	while (!feof(f))
	{
		fscanf(f, "%s%s%s%s%d%f\n", x.maHV, x.holot, x.tenHV, x.tenlop, &x.HocPhi, &x.DiemTB);
		Node *p = createSNode(x);
		insertHead(l, p);
	}
}
void showNode(Node *p)
{
	printf("%-10s%-10s%-15s%-15s%-10d%-10.3f\n", p->Info.maHV, p->Info.holot, p->Info.tenHV, p->Info.tenlop, p->Info.HocPhi, p->Info.DiemTB);
}
void xuatFile(SList l)
{
	if (isEmpty(l) == true)
	{
		printf("Danh sach rong\n");
	}
	else
	{
		printf("Noi dung danh sach la:\n");
		printf("%-10s%-10s%-15s%-15s%-10s%-10s\n", "MA HV", "HO LOT", "TEN HV", "TEN LOP", "HOC PHI", "DIEM TB");
		for (Node*p = l.head; p != NULL; p = p->Next)
		{
			showNode(p);
		}
		printf("\n");
	}
}
void showMenu()
{
	printf("1.Doc File\n");
	printf("2.Xuat File\n");
	printf("3.Xuat Hoc Vien Diem TB > 7\n");
	printf("4.Tinh tong tien Hoc Phi cua cac hoc vien trong danh sach\n");
	printf("5.Xoa tat ca hoc vien Diem TB < 2\n");
	printf("6.Them hoc vien x truoc hoc vien trong danh sach lop\n");
}
void HVDiemHon7(SList l)
{
	int dem = 0;
	printf("%-10s%-10s%-15s%-15s%-10s%-10s\n", "MA HV", "HO LOT", "TEN HV", "TEN LOP", "HOC PHI", "DIEM TB");
	for (Node *p = l.head; p != NULL; p = p->Next)
	{
		if (p->Info.DiemTB > 7)
		{
			showNode(p);
			dem++;
		}
	}
	if (dem == 0)
	{
		printf("Danh sach khong co hoc vien nao Diem TB > 7\n");
	}
	else
	{
		printf("Danh sach co %d hoc vien Diem TB > 7\n", dem);
	}
}
int TinhTongHP(SList l)
{
	int sum = 0;
	for (Node* p = l.head; p != NULL; p = p->Next)
	{
		sum += p->Info.HocPhi;
	}
	return sum;
}
Node *FindHVDiemBeHon2(SList l)
{
	for (Node *p = l.head; p != NULL; p = p->Next)
	{
		if (p->Info.DiemTB < 2)
		{
			return p;
		}
	}
	return NULL;
}
bool deleteHead(SList& l)
{
	if (isEmpty(l) == true)
	{
		return false;
	}
	else
	{
		Node* p = l.head;
		l.head = p->Next;
		p->Next = NULL;
		delete p;
	}
	return true;
}
bool deleteTail(SList& l)
{
	if (isEmpty(l) == true)
	{
		return false;
	}
	else
	{
		Node* p = l.head;
		Node* q = l.tail;
		while (p->Next != l.tail)
		{
			p = p->Next;
		}
		l.tail = p;
		l.tail->Next = NULL;
		delete q;
	}
	return true;
}
void deleteDiemBeHon2(SList& l)
{
	Node* p = l.head;
	Node* q = p;
	while (p != NULL)
	{
		if (p->Info.DiemTB < 2)
		{
			if (p == l.head)
			{
				deleteHead(l);
				p = l.head;
			}
			else if (p == l.tail)
			{
				deleteTail(l);
				p = NULL;
			}
			else
			{
				q->Next = p->Next;
				p->Next = NULL;
				delete p;
				p = q->Next;
			}
		}
		else
		{
			q = p;
			p = p->Next;
		}
	}
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
Node *findSNode(SList l, char x[])
{
	for (Node *p = l.head; p != NULL; p = p->Next)
	{
		if (stricmp(p->Info.tenHV, x) == 0)
		{
			return p;
		}
	}
	return NULL;
}