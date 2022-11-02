#include "Stack_BTLop.h"
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
cNode* createCNode(charnode c)
{
	cNode *p = new cNode;
	if (p == NULL)
	{
		printf("Khong du bo nho de cap phat!");
		getch();
		return NULL;
	}
	p->Info = c;
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
bool SEmpty(Stack s)
{
	return (s.top == NULL);
}
void OutputStack(Stack s)
{
	if (SEmpty(s) == true)
	{
		printf("Danh sach rong\n");
		return;
	}
	else
	{
		printf("Noi dung danh sach la:\n");
		for (Node* p = s.top; p != NULL; p = p->Next)
		{
			printf("%5d", p->Info);
		}
		printf("\n");
	}
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
	printf("2.Kiem tra dau ngoac hop le\n");
	printf("3.Kiem tra dau ngoac trung lap\n");
}
bool TimNgoacHopLe(char a[])
{
	cStack c;
	c.top = NULL;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(' || a[i] == '[' || a[i] == '{')
		{
			cNode *p = createCNode(a[i]);
			pushC(c, p);
		}
		else
		{
			if (c.top == NULL) return false;
			cNode *q = popC(c);
			if (a[i] == ')')
			{
				if (q->Info != '(') return false;
			}
			else if (a[i] == '}')
			{
				if (q->Info != '{') return false;
			}
			else if (a[i] == ']')
			{
				if (q->Info != '[') return false;
			}
		}
	}
	if (c.top != NULL) return false;
	return true;
}
bool TimNgoacTrungLap(cStack &c, char a[])
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ')')
		{
			if (c.top == NULL)
				return false;
			if (c.top->Info == '(')
			{
				return false;
			}
			while (c.top != NULL && c.top->Info != '(')
			{
				cNode *p = popC(c);
				delete p;
			}
			cNode *p = popC(c);
			delete p;
		}
		else
		{
			cNode* p;
			p = createCNode(a[i]);
			pushC(c, p);
		}
	}
	if (c.top == NULL)
		return true;
	else
		return false;
}