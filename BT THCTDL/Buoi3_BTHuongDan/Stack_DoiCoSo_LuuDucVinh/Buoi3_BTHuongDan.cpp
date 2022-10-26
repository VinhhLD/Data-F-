#include "Buoi3_BTHuongDan.h"
Node* createSNode(ItemType x)
{
	Node* p = new Node;
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
void pushS(Stack& s, Node* p)
{
	if (p != NULL)
	{
		if (s.top == NULL)
		{
			s.top = p;
		}
		else
		{
			p->Next = s.top;
			s.top = p;
		}
	}
}
Node* popS(Stack& s)
{
	Node* p = NULL;
	if (s.top != NULL)
	{
		p = s.top;
		s.top = s.top->Next;
		p->Next = NULL;
	}
	return p;
}
bool SEmpty(Stack s)
{
	return (s.top == NULL);
}
void ChuyenCoSo(Stack& s, int cosocandoi, int hethapphan)
{
	while (hethapphan != 0)
	{
		int x = hethapphan % cosocandoi;
		Node* p = createSNode(x);
		pushS(s, p);
		hethapphan /= cosocandoi;
	}
}
void XuatStack_CoSo(Stack& s)
{
	while (SEmpty(s) != true)
	{
		int x;
		Node* p = popS(s);
		x = p->Info;
		if (x < 10)
		{
			printf("%d", x);
		}
		else
		{
			if (x == 10)
			{
				printf("A");
			}
			else if (x == 11)
			{
				printf("B");
			}
			else if (x == 12)
			{
				printf("C");
			}
			else if (x == 13)
			{
				printf("D");
			}
			else if (x == 14)
			{
				printf("E");
			}
			else if (x == 15)
			{
				printf("F");
			}
		}
	}
}
void initstack(Stack& s)
{
	s.top = NULL;
}
void showMenu()
{
	printf("1.Chuyen co so tu he 10 sang (2, 8, 16)\n");
}
void Deletepop(Stack& s)
{
	Node* p = popS(s);
	delete p;
}