#ifndef DSLKDon_PhanSo_h
#define DSLKDon_PhanSo_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
struct PS
{
	int ts;
	int ms;
};
typedef PS ItemType;
struct Node
{
	ItemType Info;
	Node *Next;
};
struct SList
{
	Node *head;
	Node *tail;
};
Node *creatSNode(ItemType x);
void showNode(Node *p);
bool lEmpty(SList l);
void creatSList_Auto(SList &l);
void showSList(SList l);
void showMenu();
bool insertHead(SList &l, Node *p);
bool insertTail(SList &l, Node *p);
bool insertBefore(SList &l, Node *p, Node *q);
Node *findSNode (SList l, ItemType x);
#endif