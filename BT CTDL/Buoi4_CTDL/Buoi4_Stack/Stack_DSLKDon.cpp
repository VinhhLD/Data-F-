#include "Stack_DSLKDon.h"
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
cNode* createcNode(charNode x)
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
void pushC(cStack &c, cNode* p)
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
void createLStack_Auto(Stack& s)
{
	int n;
	Node* p;
	printf("Nhap so luong pt dua vao stack: "); scanf_s("%d", &n);
	srand((unsigned)time(NULL));
	s.top = NULL;
	for (int i = 0; i < n; i++)
	{
		ItemType x = rand() % 199 - 100;
		p = createSNode(x);
		if (p == NULL)
		{
			printf("Ko du bo nho de cap phat!");
			return;
		}
		else
		{
			pushS(s, p);
		}
	}
}
bool SEmpty(Stack s)
{
	return (s.top == NULL);
}
void showMenu()
{
	printf("1.Nhap Stack\n");
	printf("2.Xuat Stack\n");
	printf("3.Cho Stack rong va thuc hien n lan nhom thao tac: dua vao stack 2 pt va lay trong stack 1 pt\n");
	printf("4.Chuyen doi co so tu he 10 sang 2, 8, 16\n");
	printf("5.Dau ngoac trung lap\n");
	printf("6.Infix -> Postfix\n");
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
void pushFunc3(Stack& s)
{
	Node* p;
	for (int i = 1; i <= 2; i++)
	{
		ItemType x = rand() % 199 - 100;
		p = createSNode(x);
		if (p == NULL)
		{
			printf("Ko du bo nho de cap phat!");
			return;
		}
		else
		{
			pushS(s, p);
		}
	}
}
void popFunc3(Stack& s, Stack& a)
{
	pushS(a, popS(s));
}
void Function3(Stack& s, Stack& a)
{
	int n;
	srand((unsigned)time(NULL));
	a.top = s.top = NULL;
	printf("Nhap so lan can thao tac: "); scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		pushFunc3(s);
		printf("Da them 2 pt vao stack thanh cong\n");
		popFunc3(s, a);
		printf("Da lay ra 1 pt tu stack thanh cong\n");
	}
	OutputStack(s);
	printf("Danh sach cac pt duoc lay ra tu stack la:\n");
	OutputStack(a);
}
void ChuyenCoSo(Stack &s, int cosocandoi, int hethapphan)
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
//void Nhap(char s[], cStack &c)
//{
//	printf("Nhap bieu thuc: "); scanf("%s", &s);
//	printf("Xuat bieu thuc: %s\n", s);
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == ')')
//		{
//			cNode *t = c.top;
//			int dem = 0;
//			while (t->Info != '(')
//			{
//				dem++;
//				t = c.top;
//			}
//		}
//	}
//}
bool isEmptyCHAR(cStack c)
{
	return (c.top == NULL);
}
bool FINDdaungoac(cStack& s, char a[])
{
/*	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == '(')
		{
			cNode* p;
			p = createcNode(a[i]);
			pushC(s, p);
		}
		else
		{
			if (isEmptyCHAR(s) != true)
			{
				if (a[i] == ')')
				{
					if (s.top->Info != '(')
					{
						return false;
					}
				}
				popC(s);
			}
			else
			{
				return false;
			}
		}
	}
	return (s.top == NULL)*/;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ')')
		{
			cNode* p;
			p = createcNode(a[i]);
			pushC(s, p);
			char top = s.top->Info;
			popC(s);
			int dem = 0;
			while (s.top->Info != '(')
			{
				dem++;
				top = s.top->Info;
				popC(s);
			}
			if (dem < 1)
			{
				return 1;
			}
		}
		else
		{
			cNode* k;
			k = createcNode(a[i]);
			pushC(s, k);
		}
	}
	return false;
}
int Priority(charNode c)
{
	if (c == '(' || c == ')') return 0;
	if (c == '+' || c == '-') return 1;
	if (c == '*' || c == '/' || c == '%') return 2;
	if (c == '^') return 3;
	return -1;
}
void InfixtoPostfix(char Infix[], char Postfix[])
{
	cStack c;
	c.top = NULL;
	char token;
	int i, j = 0;
	printf("Nhap bieu thuc Infix: "); scanf("%s", Infix);
	for (i = 0; Infix[i] != '\0'; i++)
	{
		token = Infix[i];
		if (Priority(token) == -1)
		{
			Postfix[j++] = token;
		}
		else
		{
			if (token == '(')
			{
				cNode* p = createcNode('(');
				pushC(c, p);
			}
			else
			{
				if (token == ')')
				{
					while (c.top->Info != '(')
					{
						Postfix[j++] = c.top->Info;
						cNode *p = popC(c);
						delete p;
					}
					cNode* p = popC(c);
					delete p;
				}
				else
				{
					if (isEmptyCHAR(c))
					{
						c.top = NULL;
					}
					else
					{
						while (Priority(token) <= Priority(c.top->Info) && !isEmptyCHAR(c))
						{
							cNode* p = popC(c);
							Postfix[j++] = p->Info;
							delete p;
							if (isEmptyCHAR(c))
							{
								c.top = NULL;
								break;
							}
						}
					}
					cNode* p = createcNode(token);
					pushC(c, p);
				}
			}
		}
	}
	while (!isEmptyCHAR(c))
	{
		cNode* p = popC(c);
		Postfix[j++] = p->Info;
	}
	Postfix[j] = '\0';
	printf("%-30s%-30s\n", "Infix", "Postfix");
	printf("%-30s%-30s\n", Infix, Postfix);
}