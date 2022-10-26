#ifndef TestKtralan1_h
#define TestKtralan1_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct TP
{
	char MaVung[11];
	char TenTinh[31];
	char TPThuocTinh[31];
	float DienTich;
	int Danso;
	float MatDo;
};
struct Node
{
	TP Info;
	Node* Next;
};
struct SList
{
	Node* head;
	Node* tail;
};
struct cNode
{
	char Info;
	cNode* Next;
};
struct cStack
{
	cNode* top;
};
Node* createSNode(TP x);
void initSList(SList& l);
bool isEmpty(SList l);
bool insertHead(SList& l, Node* p);
void showMenu();
void docFile(FILE*& f, SList& l);
void showNode(Node* p);
void xuatFile(SList l);
void MatDoLonHonX(SList l);
bool deleteHead(SList& l);
bool deleteTail(SList& l);
bool TimTenTinh(SList l, char* x);
void deleteTinhX(SList& l);
void SapXepTenTinhSelectionSort(SList& l);
cNode* createcNode(char x);
void pushC(cStack& c, cNode* p);
cNode* popC(cStack& c);
void Bai2(cStack &c);
#endif