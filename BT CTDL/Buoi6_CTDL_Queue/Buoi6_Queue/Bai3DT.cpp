//#include "Bai3DT.h"
//QNode* createQNode(ItemType x)
//{
//	QNode* p = new QNode;
//	if (p == NULL)
//	{
//		printf("Khong du bo nho de cap phat!");
//		getch();
//		return NULL;
//	}
//	p->Info = x;
//	p->Next = NULL;
//	return p;
//}
//void pushQ(Queue& qu, QNode* p)
//{
//	if (p != NULL)
//	{
//		if (qu.head == NULL)
//		{
//			qu.head = qu.tail = p;
//		}
//		else
//		{
//			qu.tail->Next = p;
//			qu.tail = p;
//		}
//	}
//}
//QNode* popQ(Queue& qu)
//{
//	QNode* p = NULL;
//	if (qu.head != NULL)
//	{
//		p = qu.head;
//		qu.head = qu.head->Next;
//		p->Next = NULL;
//	}
//	return p;
//}
//bool isEmpty(Queue qu)
//{
//	return qu.head == NULL;
//}
//void initQueue(Queue& qu)
//{
//	qu.head = qu.tail = NULL;
//}
//void NhapSDT(int *&b, int &n)
//{
//	do
//	{
//		printf("Nhap so luong SDT: "); scanf("%d", &n);
//	} while (n <= 0);
//	b = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap SDT thu %d: ", i); scanf("%d", &b[i]);
//	}
//	printf("Cac SDT:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", b[i]);
//	}
//	printf("\n");
//}
//bool Kiemtratrung(Queue qu, ItemType x)
//{
//	QNode* p = qu.head;
//	while (p != NULL)
//	{
//		if (p->Info == x)
//		{
//			return false;
//		}
//		p = p->Next;
//	}
//	return true;
//}
//void TinNhanDT(Queue &qu, int *b, int n)
//{
//	int k;
//	int i = 0, dem = 0;
//	initQueue(qu);
//	printf("Nhap so luong tin nhan: "); scanf("%d", &k);
//	for (; i < n; i++)
//	{
//		if (dem < k)
//		{
//			if (isEmpty(qu) == true)
//			{
//				QNode* p = createQNode(b[i]);
//				pushQ(qu, p);
//				dem++;
//			}
//			else if (Kiemtratrung(qu, b[i]) == true)
//			{
//				QNode* p = createQNode(b[i]);
//				pushQ(qu, p);
//				dem++;
//			}
//		}
//		else if (dem == k)
//		{
//			if (Kiemtratrung(qu, b[i]) == true)
//			{
//				QNode* c = popQ(qu);
//				delete c;
//				dem--;
//				QNode* p = createQNode(b[i]);
//				pushQ(qu, p);
//				dem++;
//			}
//		}
//	}
//	printf("Cac tin nhan:\n");
//	for (QNode* p = qu.head; p != NULL; p = p->Next)
//	{
//		printf("%5d", p->Info);
//	}
//}