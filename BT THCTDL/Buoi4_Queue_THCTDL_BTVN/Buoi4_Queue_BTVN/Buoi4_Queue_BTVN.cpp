#include "Buoi4_Queue_BTVN.h"
QNode* createQNode(Hang x)
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
void initQueue(Queue& qu)
{
	qu.head = qu.tail = NULL;
}
bool isEmpty(Queue qu)
{
	return qu.head == NULL;
}
void showQNode(QNode* p)
{
	printf("%-10s%-20s%-15s%-10d\n", p->Info.MaHang, p->Info.TenHang, p->Info.DonViTinh, p->Info.soluong);
}
void xuatFile(Queue qu)
{
	if (isEmpty(qu) == true)
	{
		printf("Danh sach rong\n");
	}
	else
	{
		printf("Noi dung danh sach la:\n");
		printf("%-10s%-20s%-15s%-10s\n", "MA HANG", "TEN HANG", "DON VI TINH", "SO LUONG");
		for (QNode* p = qu.head; p != NULL; p = p->Next)
		{
			showQNode(p);
		}
		printf("\n");
	}
}
bool pushQ(Queue& qu, QNode* p)
{
	if (p == NULL)
	{
		return false;
	}
	else
	{
		if (isEmpty(qu) == true)
		{
			qu.head = qu.tail = p;
		}
		else
		{
			qu.tail->Next = p;
			qu.tail = p;
		}
	}
	return true;
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
void docFile(FILE*& f, Queue& qu)
{
	Hang x;
	initQueue(qu);
	f = fopen("file.txt", "rt");
	while (!feof(f))
	{
		fscanf(f, "%[^#]%*c%[^#]%*c%[^#]%*c%d\n", x.MaHang, x.TenHang, x.DonViTinh, &x.soluong);
		QNode* p = createQNode(x);
		pushQ(qu, p);
	}
}
void showMenu()
{
	printf("1.Doc File\n");
	printf("2.Xuat File\n");
	printf("3.Xem thong tin mat hang chuan bi duoc xuat kho\n");
	printf("4.Xuat khoi kho 1 mat hang va cho xem thong tin mat hang do\n");
	printf("5.Xem thong tin mat hang vua nhap vao kho\n");
	printf("6.Tim va xem thong tin cua mot mat hang bat ky trong kho\n");
	printf("7.Xuat toan bo hang hoa trong kho\n");
}
QNode* top(Queue qu)
{
	QNode* p = NULL;
	if (isEmpty(qu) == true)
	{
		return NULL;
	}
	else
	{
		p = qu.head;
	}
	return p;
}
QNode* findQNode(Queue qu, char x[])
{
	for (QNode* p = qu.head; p != NULL; p = p->Next)
	{
		if (stricmp(p->Info.TenHang, x) == 0)
		{
			return p;
		}
	}
	return NULL;
}
void deleteALL(Queue& qu)
{
	printf("%-10s%-20s%-15s%-10s\n", "MA HANG", "TEN HANG", "DON VI TINH", "SO LUONG");
	while (isEmpty(qu) != true)
	{
		QNode* p = popQ(qu);
		showQNode(p);
		delete p;
	}
}