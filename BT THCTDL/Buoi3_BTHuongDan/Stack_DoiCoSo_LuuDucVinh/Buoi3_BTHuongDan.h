//2001210004
//Luu Duc Vinh
//luuducvinh1392@gmail.com
#ifndef Stack_DoiCoSo_LuuDucVinh_h
#define Stack_DoiCoSo_LuuDucVinh_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
typedef int ItemType;
struct Node
{
	ItemType Info;
	Node* Next;
};
struct Stack
{
	Node* top;
};
Node* createSNode(ItemType x);
void pushS(Stack& s, Node* p);
Node* popS(Stack& s);
bool SEmpty(Stack s);
void initstack(Stack& s);
void ChuyenCoSo(Stack& s, int cosocandoi, int hethapphan);
void XuatStack_CoSo(Stack& s);
void showMenu();
void Deletepop(Stack& s);
#endif
