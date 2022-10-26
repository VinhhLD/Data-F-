//#include "DSLKDon_BaiTHLopBai1.h"
//Node *creatSNode(ItemType x)
//{
//	Node *p = new Node;
//	if (p == NULL)
//	{
//		printf("Ko du bo nho de cap phat!");
//		getch();
//		return NULL;
//	}
//	p->Info = x;
//	p->Next = NULL;
//	return p;
//}
//void showNode(Node *p)
//{
//	printf("%4d", p->Info);
//}
//bool lEmpty(SList l)
//{
//	return l.head == NULL;
//}
//void docFile(FILE *&f, SList &l)
//{
//	int x;
//	f = fopen("file.txt", "rt");
//	if (!f)
//	{
//		printf("Loi doc file\n");
//	}
//	while (!feof(f))
//	{
//		fscanf(f, "%d", &x);
//		Node *q = creatSNode(x);
//		if (q == NULL)
//		{
//			printf("Ko du bo nho de cap phat");
//			return;
//		}
//		if (l.head == NULL)
//		{
//			l.head = l.tail = q;
//		}
//		else
//		{
//			l.tail->Next = q;
//			l.tail = q;
//		}
//	}
//}
//void showSList(SList l)
//{
//	if (lEmpty(l) == true)
//	{
//		printf("Danh sach rong\n");
//		return;
//	}
//	else
//	{
//		printf("Noi dung danh sach la:\n");
//		for (Node *p = l.head; p != NULL; p = p->Next)
//		{
//			showNode(p);
//		}
//		printf("\n");
//	}
//}
//void showMenu()
//{
//	printf("1.Doc file\n");
//	printf("2.Xuat\n");
//	printf("3.Xoa pt dau\n");
//	printf("4.Xoa pt sau pt da cho\n");
//	printf("5.Xoa cac pt co gia tri bang x\n");
//	printf("6.Xoa toan bo danh sach\n");
//	printf("7.Xoa cac pt chan trong dslk\n");
//
//}
//bool deletetHead(SList &l)
//{
//	if (l.head == NULL) return false;
//	else
//	{
//		Node *p = l.head;
//		l.head = p->Next;
//		p->Next = NULL;
//		delete p;
//	}
//	return true;
//}
//void deleteTail(SList& l)
//{
//	if (l.head == NULL)
//	{
//		return;
//	}
//	else
//	{
//		Node* p = l.tail;
//		Node* q = l.head;
//		while (q->Next != l.tail)
//		{
//			q = q->Next;
//		}
//		l.tail = q;
//		l.tail->Next = NULL;
//		delete p;
//	}
//}
////bool deleteTail(SList &l)
////{
////	if (l.tail == NULL)
////		return false;
////	Node* p = l.head;
////	Node* q = l.tail;
////	if (p == q)
////	{
////		l.head = l.tail = NULL;
////	}
////	else
////	{
////		while (p->Next != q)
////		{
////			p = p->Next;
////		}
////		l.tail = p;
////		l.tail->Next = NULL;
////	}
////	delete q;
////	return true;
////}
//bool deleteAfter(SList &l, Node* q)
//{
//	if (q == NULL || q->Next == NULL) return false;
//	else
//	{
//		Node* p = q->Next;
//		q->Next = p->Next;
//		if (l.tail == p)
//		{
//			l.tail = q;
//		}
//		delete p;
//	}
//	return true;
//}
//Node* findSNode(SList l, ItemType x)
//{
//	for (Node* p = l.head; p != NULL; p = p->Next)
//	{
//		if (p->Info == x)
//		{
//			return p;
//		}
//	}
//	return NULL;
//}
//void deleteX(SList& l)
//{
//	int x;
//	Node* q;
//	printf("Nhap gia tri pt muon xoa: "); scanf("%d", &x);
//	q = findSNode(l, x);
//	if (q != NULL)
//	{
//		Node* p = l.head;
//		Node* r = p;
//		while (p != NULL)
//		{
//			if (p->Info == x)
//			{
//				if (p == l.head)
//				{
//					deletetHead(l);
//					p = l.head;
//				}
//				else if (p == l.tail)
//				{
//					deleteTail(l);
//					p = NULL;
//				}
//				else
//				{
//					r->Next = p->Next;
//					p->Next = NULL;
//					delete p;
//					p = r->Next;
//				}
//			}
//			else
//			{
//				r = p;
//				p = p->Next;
//			}
//		}
//		printf("Da xoa cac pt co gia tri %d thanh cong\n", x);
//	}
//	else
//	{
//		printf("Khong co gia tri %d trong dslk\n", x);
//	}
//}
//bool deleteSList(SList& l)
//{
//	if (l.head == NULL) return false;
//	else
//	{
//		while (l.head != NULL)
//		{
//			Node* p = l.head;
//			l.head = l.head->Next;
//			delete p;
//		}
//	}
//	l.tail = NULL;
//	return true;
//}
//void deleteEven(SList& l)
//{
//	Node* p = l.head;
//	Node* q = p;
//	while (p != NULL)
//	{
//		if (p->Info % 2 == 0)
//		{
//			if (p == l.head)
//			{
//				deletetHead(l);
//				p = l.head;
//			}
//			else if (p == l.tail)
//			{
//				deleteTail(l);
//				p = NULL;
//			}
//			else
//			{
//				q->Next = p->Next;
//				p->Next = NULL;
//				delete p;
//				p = q->Next;
//			}
//		}
//		else
//		{
//			q = p;
//			p = p->Next;
//		}
//	}
//}