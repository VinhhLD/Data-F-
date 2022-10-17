#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
struct Node
{
	int info;
	Node *next;
};
struct SList
{
	Node *head;
	Node *tail;
};
void showMenu ();
Node *creatNode(int x);
void createSList (SList &l, int n);
int	lEmpty (SList l);
void ShowSlist (SList l);
void addHeadSList (SList &l, Node *p);
void addTailSList (SList &l, Node *p);
void addNode (SList &l, int &n);
void deleteHeadSList (SList &l);
void deleteTailSList (SList &l);
void deleteNode (SList &l, int &n);
void swap (int &x, int &y);
void Tang_InterchangeSortSList (SList l);
void Giam_InterchangeSortSList (SList l);
int SizeOfList (SList l);
int SumSList (SList l);
void PTChan_le (SList l);
int Get (SList l, int x);
void VitriPTChan_Le (SList l, int n);
Node *findNode (SList l, int x);
int DemSoLanXuatHienX (SList l, int x);
int MaxSList (SList l);
int MinSList (SList l);
int PTChan_Min (SList l);
int PTLe_Max (SList l);
int PTChan_Max (SList l);
int PTLe_Min (SList l);
void deleteMaxSList (SList &l, int &n);
void deleteMinSList (SList &l, int &n);
void KTMang_TangGiam (SList l, int n);
int main ()
{
	SList l;
	int n, chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				printf("Nhap so luong pt: "); scanf_s("%d", &n);
				createSList(l, n);
				break;
			}
		case 2:
			{
				ShowSlist(l);
				break;
			}
		case 3:
			{
				addNode(l, n);
				break;
			}
		case 4:
			{
				deleteNode(l, n);
				break;
			}
		case 5:
			{
				int choose;
				do
				{
				printf("1.Tang\n");
				printf("2.Giam\n");
				printf("Chon chuc nang: "); scanf_s("%d", &choose);
				switch (choose)
				{
				case 1:
					{
						Tang_InterchangeSortSList(l);
						break;
					}
				case 2:
					{
						Giam_InterchangeSortSList(l);
						break;
					}
				}
				}
				while (choose != 1 && choose != 2);
				break;
			}
		case 6:
			{
				printf("So PT co trong dslk la: %d\n", SizeOfList(l));
				break;
			}
		case 7:
			{
				printf("Tong cac PT co trong dslk la: %d\n", SumSList(l));
				break;
			}
		case 8:
			{
				PTChan_le(l);
				break;
			}
		case 9:
			{
				VitriPTChan_Le(l, n);
				break;
			}
		case 10:
			{
				int x;
				printf("Nhap x can tim: "); scanf_s("%d", &x);
				if (findNode(l, x) != NULL)
				{
					printf("Tim thay %d trong dslk\n", *findNode(l, x));
				}
				else
				{
					printf("Khong tim thay %d trong dslk\n", x);
				}
				break;
			}
		case 11:
			{
				int x;
				printf("Nhap x can dem: "); scanf_s("%d", &x);
				printf("Trong dslk gia tri %d xuat hien %d lan\n", x, DemSoLanXuatHienX(l, x));
				break;
			}
		case 12:
			{
				if (lEmpty(l) == 1)
				{
					printf("Danh sach rong\n");
				}
				else
				{
					printf("PT max trong dslk la: %d\n", MaxSList(l));
					printf("PT min trong dslk la: %d\n", MinSList(l));
				}
				break;
			}
		case 13:
			{
				if (PTChan_Min(l) == -1)
				{
					printf("Trong dslk ko co gia tri chan\n");
				}
				else
				{
					printf("PT Chan nho nhat trong dslk la: %d\n", PTChan_Min(l));
				}
				break;
			}
		case 14:
			{
				if (PTLe_Max(l) == -1)
				{
					printf("Trong dslk ko co gia tri le\n");
				}
				else
				{
					printf("PT Le lon nhat trong dslk la: %d\n", PTLe_Max(l));
				}
				break;
			}
		case 15:
			{
				if (PTChan_Max(l) == -1)
				{
					printf("Trong dslk ko co gia tri chan\n");
				}
				else
				{
					printf("PT Chan lon nhat trong dslk la: %d\n", PTChan_Max(l));
				}
				break;
			}
		case 16:
			{
				if (PTLe_Min(l) == -1)
				{
					printf("Trong dslk ko co gia tri le\n");
				}
				else
				{
					printf("PT Le nho nhat trong dslk la: %d\n", PTLe_Min(l));
				}
				break;
			}
		case 17:
			{
				int choose;
				do
				{
				printf("1.Xoa PT Max cua dslk\n");
				printf("2.Xoa PT Min cua dslk\n");
				printf("Chon chuc nang: "); scanf_s("%d", &choose);
				switch (choose)
				{
				case 1:
					{
						deleteMaxSList(l, n);
						break;
					}
				case 2:
					{
						deleteMinSList(l, n);
						break;
					}
				}
				}
				while (choose != 1 && choose != 2);
				break;
			}
		case 18:
			{
				KTMang_TangGiam(l, n);
				break;
			}
		}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void showMenu ()
{
	printf("\n1.Nhap DSLK\n");
	printf("2.Xuat DSLK\n");
	printf("3.Them node vao DSLK (dau/giua/cuoi)\n");
	printf("4.Xoa node  trong DSLK (dau/giua/cuoi\n");
	printf("5.Sap xep dslk tang/giam\n");
	printf("6.Dem so pt cua dslk\n");
	printf("7.Tinh tong cac pt cua dslk\n");
	printf("8.Xuat pt chan/le\n");
	printf("9.Xuat pt o vi tri chan/le\n");
	printf("10.Tim x trong dslk\n");
	printf("11.Dem dslk co bao nhieu x\n");
	printf("12.Tim PT Max/Min tren dslk\n");
	printf("13.Tim PT chan Min tren dslk\n");
	printf("14.Tim PT le Max tren dslk\n");
	printf("15.Tim PT chan Max tren dslk, neu dslk ko co so chan thi tra ve -1\n");
	printf("16.Tim PT le Min tren dslk, neu dslk ko co so le thi tra ve -1\n");
	printf("17.Xoa PT max/min cua dslk\n");
	printf("18.Kiem tra dslk co tang dan/giam dan ko\n");
}
Node *creatNode(int x)
{
	Node *p = new Node;
	if (p == NULL)
	{
		printf("Khong du bo nho de cap phat!");
		return NULL;
	}
	p->info = x;
	p->next = NULL;
	return p;
}
void createSList (SList &l, int n)
{
	int x;
	Node *q;
	l.head = l.tail = NULL;
	for (int i = 0; i < n; i++)
	{
		printf("Nhap pt thu %d: ", i);
		scanf_s("%d", &x);
		q = creatNode(x);
		if (q == NULL)
		{
			printf("Khong du bo nho de cap phat!");
			return;
		}
		if (l.head == NULL)
		{
			l.head = l.tail = q;
		}
		else
		{
			l.tail->next = q;
			l.tail = q;
		}
	}
}
int	lEmpty (SList l)
{
	if (l.head == NULL)
		return 1;
	else
		return 0;
}
void ShowSlist (SList l)
{
	if (lEmpty(l) == 1)
	{
		printf("Danh sach rong\n");
		return;
	}
	printf("Noi dung danh sach la:\n");
	Node *p = l.head;
	while (p != NULL)
	{
		printf("%5d", p->info);
		p = p->next;
	}
}
void addHeadSList (SList &l, Node *p)
{
	if (p == NULL)
	{
		return;
	}
	else
	{
		if (l.head == NULL)
		{
			l.head = l.tail = p;
		}
		else
		{
			p->next = l.head;
			l.head = p;
		}
	}
}
void addTailSList (SList &l, Node *p)
{
	if (p == NULL)
	{
		return;
	}
	else
	{
		if (l.head == NULL)
		{
			l.head = l.tail = p;
		}
		else
		{
			l.tail->next = p;
			l.tail = p;
		}
	}
}
void addNode (SList &l, int &n)
{
	int x, vitri;
	Node *p;
	printf("Nhap vi tri can them Node: "); scanf_s("%d", &vitri);
	printf("Nhap gia tri cho Node ban muon them vao DSLK: "); scanf_s("%d", &x);
	p = creatNode(x);
	if (vitri  < 0 || vitri > n)
	{
		printf("Ko the chen\n");
		return;
	}
	else if (vitri - 1 == 0)
	{
		addHeadSList(l, p);
		n++;
	}
	else if (vitri = n)
	{
		addTailSList(l, p);
		n++;
	}
	else
	{
		Node *Pre = NULL;
		Node *Aft = l.head;
		int i = 0;
		while (Aft != NULL)
		{
			if (i == vitri - 1)
			{
				break;
			}
			Pre = Aft;
			Aft = Aft->next;
			i++;
		}
		Pre->next = p;
		p->next = Aft;
		n++;
	}
}
void deleteHeadSList (SList &l)
{
	if (l.head == NULL)
	{
		return;
	}
	else
	{
		Node *p = l.head;
		l.head = p->next;
		p->next = NULL;
		delete p;
	}
}
void deleteTailSList (SList &l)
{
	if (l.head == NULL)
	{
		return;
	}
	else
	{
		Node *p = l.tail;
		Node *q = l.head;
		while (q->next != l.tail)
		{
			q = q->next;
		}
		l.tail = q;
		l.tail->next = NULL;
		delete p;
	}
}
void deleteNode (SList &l, int &n)
{
	int vitri;
	printf("Nhap vi tri can xoa Node: "); scanf_s("%d", &vitri);
	if (vitri  < 0 || vitri > n)
	{
		printf("Ko the chen\n");
		return;
	}
	else if (vitri - 1 == 0)
	{
		deleteHeadSList(l);
		n--;
	}
	else if (vitri == n)
	{
		deleteTailSList(l);
		n--;
	}
	else
	{
		int i = 0;
		Node *p = l.head;
		Node *q = new Node;
		while (p != NULL) // tim node thu vitri
		{
			i++;
			q = p;
			if (i == vitri)
			{
				break; // tim thay thi break
			}
			else
			{
				p = p->next; // ko thi tim tiep
			}
		}
		Node *r = l.head;
		while (r->next != q) // tim node vitri - 1
		{
			r = r->next;
		}
		r->next = q->next; // cho node next cua node vitri - 1 tro toi node vitri + 1;
		delete q;
		n--;
	}
}
void swap (int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Tang_InterchangeSortSList (SList l)
{
	for (Node *p = l.head; p != l.tail; p = p->next)
	{
		for (Node *q = p->next; q != NULL; q = q->next)
		{
			if (q->info < p->info)
			{
				swap(p->info, q->info);
			}
		}
	}
}
void Giam_InterchangeSortSList (SList l)
{
	for (Node *p = l.head; p != l.tail; p = p->next)
	{
		for (Node *q = p->next; q != NULL; q = q->next)
		{
			if (q->info > p->info)
			{
				swap(p->info, q->info);
			}
		}
	}
}
int SizeOfList (SList l)
{
	Node *tmp = l.head;
	int dem = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		dem++;
	}
	return dem;
}
int SumSList (SList l)
{
	int Sum = 0;
	for (Node *q = l.head; q != NULL; q = q->next)
	{
		Sum += q->info;
	}
	return Sum;
}
void PTChan_le (SList l)
{
	printf("PT chan trong dslk la:\n");
	for (Node *q = l.head; q != NULL; q = q->next)
	{
		if (q->info % 2 == 0)
		{
			printf("%5d", q->info);
		}
	}
	printf("\nPT le trong dslk la:\n");
	for (Node *q = l.head; q != NULL; q = q->next)
	{
		if (q->info % 2 != 0)
		{
			printf("%5d", q->info);
		}
	}
	printf("\n");
}
int Get (SList l, int x)
{
	int k = 0;
	Node *p = l.head;
	while (p->next != NULL && k != x)
	{
		k++;
		p = p->next;
	}
	return p->info;
}
void VitriPTChan_Le (SList l, int n)
{ 
	printf("PT o vi tri chan trong dslk:\n");
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%5d", Get(l, i));
		}
	}
	printf("\nPT o vi tri le trong dslk:\n");
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			printf("%5d", Get(l, i));
		}
	}
}
Node *findNode (SList l, int x)
{
	for (Node *p = l.head; p != NULL; p = p->next)
	{
		if (p->info == x)
		{
			return p;
		}
	}
	return NULL;
}
int DemSoLanXuatHienX (SList l, int x)
{
	int dem = 0;
	for (Node *p = l.head; p != NULL; p = p->next)
	{
		if (p->info == x)
		{
			dem++;
		}
	}
	return dem;
}
int MaxSList (SList l)
{
	Node *p = l.head;
	int Max = l.head->info;
	while (p != NULL)
	{
		if (Max < p->info)
		{
			Max = p->info;
		}
		p = p->next;
	}
	return Max;
}
int MinSList (SList l)
{
	Node *p = l.head;
	int Min = l.head->info;
	while (p != NULL)
	{
		if (Min > p->info)
		{
			Min = p->info;
		}
		p = p->next;
	}
	return Min;
}
int PTChan_Min (SList l)
{
	Node *p = l.head;
	int Min, dem = 0;
	for (; p != NULL; p = p->next)
	{
		if (p->info % 2 == 0)
		{
			dem++;
			Min = p->info;
			break;
		}
	}
	if (dem == 0)
		return -1;
	for (; p != NULL; p = p->next)
	{
		if ((p->info % 2 == 0) &&  (Min > p->info))
		{
			Min = p->info;
		}
	}
	return Min;
}
int PTLe_Max (SList l)
{
	Node *p = l.head;
	int Max, dem = 0;
	for (; p != NULL; p = p->next)
	{
		if (p->info % 2 != 0)
		{
			dem++;
			Max = p->info;
			break;
		}
	}
	if (dem == 0)
		return -1;
	for (; p != NULL; p = p->next)
	{
		if ((p->info % 2 != 0) &&  (Max < p->info))
		{
			Max = p->info;
		}
	}
	return Max;
}
int PTChan_Max (SList l)
{
	Node *p = l.head;
	int Max, dem = 0;
	for (; p != NULL; p = p->next)
	{
		if (p->info % 2 == 0)
		{
			dem++;
			Max = p->info;
			break;
		}
	}
	if (dem == 0)
		return -1;
	for (; p != NULL; p = p->next)
	{
		if ((p->info % 2 == 0) &&  (Max < p->info))
		{
			Max = p->info;
		}
	}
	return Max;
}
int PTLe_Min (SList l)
{
	Node *p = l.head;
	int Min, dem = 0;
	for (; p != NULL; p = p->next)
	{
		if (p->info % 2 != 0)
		{
			dem++;
			Min = p->info;
			break;
		}
	}
	if (dem == 0)
		return -1;
	for (; p != NULL; p = p->next)
	{
		if ((p->info % 2 != 0) &&  (Min > p->info))
		{
			Min = p->info;
		}
	}
	return Min;
}
void deleteMaxSList (SList &l, int &n)
{
	int posMax = MaxSList(l);
	Node *p = l.head;
	Node *q = new Node;
	while (p != NULL)
	{
		q = p;
		if (p->info == posMax)
		{
			break;
		}
		else
		{
			p = p->next;
		}
	}
	Node *r = l.head;
	while (r->next != q)
	{
		r = r->next;
	}
	r->next = q->next;
	delete q;
	n--;
}
void deleteMinSList (SList &l, int &n)
{
	int posMin = MinSList(l);
	Node *p = l.head;
	Node *q = new Node;
	while (p != NULL)
	{
		q = p;
		if (p->info == posMin)
		{
			break;
		}
		else
		{
			p = p->next;
		}
	}
	Node *r = l.head;
	while (r->next != q)
	{
		r = r->next;
	}
	r->next = q->next;
	delete q;
	n--;
}
void KTMang_TangGiam (SList l, int n)
{
	int tang = 0, giam = 0;
	for (Node *p = l.head; p != l.tail; p = p->next)
	{
		for (Node *q = p->next; q != NULL; q = q->next)
		{
			if (p->info < q->info)
			{
				tang++;
			}
			else if (p->info > q->info)
			{
				giam++;
			}
		}
	}
	if (tang == n - 1)
	{
		printf("DSLK tang dan\n");
	}
	else if (giam == n - 1)
	{
		printf("DSLK giam dan\n");
	}
	else
	{
		printf("DSLK ko tang ko giam\n");
	}
}