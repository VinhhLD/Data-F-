#include "TestKtralan1.h"
Node* createSNode(TP x)
{
	Node* p = new Node;
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
void initSList(SList& l)
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
void showMenu()
{
	printf("1.Doc file txt\n");
	printf("2.Xuat file\n");
	printf("3.Xuat mat do lon hon x\n");
	printf("4.Xoa cac tinh thanh co ten x trong danh sach\n");
	printf("5.Sap xep danh sach theo ten tinh\n");
	printf("6.Bai 2\n");
}
void docFile(FILE*& f, SList& l)
{
	TP x;
	initSList(l);
	f = fopen("file.txt", "rt");
	while (!feof(f))
	{
		fscanf(f, "%s%s%s%f%d\n", x.MaVung, x.TenTinh, x.TPThuocTinh, &x.DienTich, &x.Danso);
		x.MatDo = x.DienTich / x.Danso;
		Node* p = createSNode(x);
		insertHead(l, p);
	}
}
void showNode(Node* p)
{
	printf("%-10s%-15s%-15s%-20.3f%-15d%-15.3f\n", p->Info.MaVung, p->Info.TenTinh, p->Info.TPThuocTinh, p->Info.DienTich, p->Info.Danso, p->Info.MatDo);
}
void xuatFile(SList l)
{
	if (isEmpty(l) == true)
	{
		printf("Danh sanh rong\n");
	}
	else
	{
		printf("Noi dung danh sach la:\n");
		printf("%-10s%-15s%-15s%-20s%-15s%-15s\n", "MA VUNG", "TINH", "THANH PHO", "DIEN TICH", "DAN SO", "MAT DO");
		for (Node* p = l.head; p != NULL; p = p->Next)
		{
			showNode(p);
		}
		printf("\n");
	}
}
void MatDoLonHonX(SList l)
{
	float x;
	int dem = 0;
	printf("Nhap so mat do can so sanh: "); scanf("%f", &x);
	printf("%-10s%-15s%-15s%-20s%-15s%-15s\n", "MA VUNG", "TINH", "THANH PHO", "DIEN TICH", "DAN SO", "MAT DO");
	for (Node* p = l.head; p != NULL; p = p->Next)
	{
		if (p->Info.MatDo > x)
		{
			showNode(p);
			dem++;
		}
	}
	if (dem == 0)
	{
		printf("Khong co thanh pho nao co mat do lon hon %.3f", x);
	}
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
bool TimTenTinh(SList l, char* x)
{
	for (Node* p = l.head; p != NULL; p = p->Next)
	{
		if (stricmp(p->Info.TenTinh, x) == 0)
		{
			return true;
		}
	}
	return false;
}
void deleteTinhX(SList& l)
{
	char* x;
	x = (char*)malloc(31 * sizeof(char));
	printf("Nhap ten tinh muon xoa: "); scanf("%s", x);
	if (TimTenTinh(l, x) == true)
	{
		Node* p = l.head;
		Node* q = p;
		while (p != NULL)
		{
			if (stricmp(p->Info.TenTinh, x) == 0)
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
		printf("Da xoa thanh cong tinh thanh co ten %s\n", x);
	}
	else
	{
		printf("Khong co tinh thanh %s trong danh sach\n", x);
	}
}
void swap(TP& x, TP& y)
{
	TP temp = x;
	x = y;
	y = temp;
}
void SapXepTenTinhSelectionSort(SList& l)
{
	for (Node* p = l.head; p != l.tail; p = p->Next)
	{
		Node* min = p;
		for (Node* q = p->Next; q != NULL; q = q->Next)
		{
			if (stricmp(q->Info.TenTinh, min->Info.TenTinh) < 0)
			{
				min = q;
			}
		}
		swap(p->Info, min->Info);
	}
}
cNode* createcNode(char x)
{
	cNode* p = new cNode;
	if (p == NULL)
	{
		printf("Khong du bo nho de cap phat!");
		_getch();
		return NULL;
	}
	p->Info = x;
	p->Next = NULL;
	return p;
}
void pushC(cStack& c, cNode* p)
{
	if (p != NULL)
	{
		if (c.top == NULL)
		{
			c.top = p;
		}
		else
		{
			p->Next = c.top;
			c.top = p;
		}
	}
}
cNode* popC(cStack& c)
{
	cNode* p = NULL;
	if (c.top != NULL)
	{
		p = c.top;
		c.top = c.top->Next;
		p->Next = NULL;
	}
	return p;
}
void Bai2(cStack &c)
{
	char x[100];
	printf("Nhap chuoi muon dao nguoc: ");
	fflush(stdin);
	getchar();
	gets_s(x);
	c.top = NULL;
	for (int i = 0; x[i] != '\0'; i++)
	{
		cNode* q = createcNode(x[i]);
		pushC(c, q);
	}
	printf("Chuoi sau khi dao nguoc la: ");
	for (cNode* p = c.top; p != NULL; p = p->Next)
	{
		printf("%c", p->Info);
	}
	printf("\n");
}