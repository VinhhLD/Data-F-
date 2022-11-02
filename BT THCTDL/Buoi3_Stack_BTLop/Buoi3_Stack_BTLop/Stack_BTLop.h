//2001210004
//Luu Duc Vinh
//luuducvinh1392@gmail.com
#ifndef Stack_BTLop_h
#define Stack_BTLop_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef int ItemType;
typedef char charnode;
struct Node
{
	ItemType Info;
	Node* Next;
};
struct cNode
{
	charnode Info;
	cNode* Next;
};
struct Stack
{
	Node* top;
};
struct cStack
{
	cNode* top;
};
Node* createSNode(ItemType x);
cNode* createCNode(charnode c);
void pushS(Stack& s, Node* p);
void pushC(cStack& c, cNode* p);
cNode* popC(cStack& c);
Node* popS(Stack& s);
bool SEmpty(Stack s);
void OutputStack(Stack s);
void ChuyenCoSo(Stack& s, int cosocandoi, int hethapphan);
void XuatStack_CoSo(Stack& s);
void initstack(Stack& s);
void showMenu();
bool TimNgoacHopLe(char a[]);
bool TimNgoacTrungLap(cStack &c, char a[]);
#endif