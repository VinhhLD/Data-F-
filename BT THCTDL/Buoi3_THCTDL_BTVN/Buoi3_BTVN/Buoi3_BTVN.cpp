#include "Buoi3_BTVN.h"
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
ldNode* createldNode(ldType x)
{
	ldNode* p = new ldNode;
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
void pushld(ldStack& s, ldNode* p)
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
ldNode* popld(ldStack& s)
{
	ldNode* p = NULL;
	if (s.top != NULL)
	{
		p = s.top;
		s.top = s.top->Next;
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
bool isEmptyCHAR(cStack c)
{
	return (c.top == NULL);
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
						cNode* p = popC(c);
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
void TinhGiaTriPostfix(char Postfix[])
{
	ldStack s;
	s.top = NULL;
	for (int i = 0; Postfix[i] != '\0'; i++)
	{
		if (Priority(Postfix[i]) == -1)
		{
			ldNode* p = createldNode(Postfix[i] - 48);
			pushld(s, p);
		}
		else
		{
			long double a = s.top->Info;
			ldNode* p = popld(s);
			delete p;
			long double b = s.top->Info;
			long double tmp;
			p = popld(s);
			delete p;
			if (Postfix[i] == '+')
			{
				tmp = b + a;
			}
			else if (Postfix[i] == '-')
			{
				tmp = b - a;
			}
			else if (Postfix[i] == '*')
			{
				tmp = b * a;
			}
			else if (Postfix[i] == '/')
			{
				tmp = b / a;
			}
			else if (Postfix[i] == '%')
			{
				tmp = int(b) % int(a);
			}
			else
			{
				tmp = pow(b, a);
			}
			ldNode* k = createldNode(tmp);
			pushld(s, k);
		}
	}
	printf("Ket qua: %.3f\n", s.top->Info);
}
void GiaiThua(Stack& s)
{
	int n;
	printf("Nhap so can tinh giai thua:  "); scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		Node* p = createSNode(i);
		pushS(s, p);
	}
	for (int i = 1; i < n - 1; i++)
	{
		s.top->Next->Info = s.top->Info * s.top->Next->Info;
		Node* c = popS(s);
		delete c;
	}
	printf("Ket qua: %d\n", s.top->Info);
}
void showMenu()
{
	printf("1.Tinh gia tri Postfix\n");
	printf("2.Tinh giai thua\n");
}