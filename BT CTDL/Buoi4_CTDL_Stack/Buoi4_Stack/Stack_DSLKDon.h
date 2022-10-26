#ifndef Stack_DSLKDon_h
#define Stack_DSLKDon_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100
typedef int ItemType;
typedef char charNode;
typedef long double ldType;
struct Node
{
	ItemType Info;
	Node* Next;
};
struct cNode
{
	charNode Info;
	cNode* Next;
};
struct ldNode
{
	ldType Info;
	ldNode* Next;
};
struct ldStack
{
	ldNode* top;
};
struct cStack
{
	cNode* top;
};
struct Stack
{
	Node* top;
};
Node* createSNode(ItemType x);
void pushS(Stack& s, Node* p);
Node* popS(Stack& s);
void createLStack_Auto(Stack& s);
bool SEmpty(Stack s);
void showMenu();
void OutputStack(Stack s);
void pushFunc3(Stack& s);
void popFunc3(Stack& s, Stack& a);
void Function3(Stack& s, Stack& a);
void ChuyenCoSo(Stack& s, int cosocandoi, int hethapphan);
void XuatStack_CoSo(Stack& s);
cNode* createcNode(charNode x);
void pushC(cStack& c, cNode* p);
cNode* popC(cStack& c);
bool isEmptyCHAR(cStack c);
bool FINDdaungoac(cStack& s, char a[]);
int Priority(charNode c);
void InfixtoPostfix(char Infix[], char Postfix[]);
void TinhGiaTriPostfix(char Postfix[]);
ldNode* createldNode(ldType x);
void pushld(ldStack& s, ldNode* p);
ldNode* popld(ldStack& s);
void GiaiThua(Stack& s);
#endif