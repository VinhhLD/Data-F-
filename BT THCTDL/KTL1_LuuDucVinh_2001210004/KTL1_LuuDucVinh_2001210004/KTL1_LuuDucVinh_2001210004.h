//2001210004
//Luu Duc Vinh
//luuducvinh1392@gmail.com
#ifndef KTL1_LuuDucVinh_2001210004_h
#define KTL1_LuuDucVinh_2001210004_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct HocVien
{
	char maHV[11];
	char holot[31];
	char tenHV[16];
	char tenlop[31];
	int HocPhi;
	float DiemTB;
};
struct Node
{
	HocVien Info;
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
Node *createSNode(HocVien x);
void initSList(SList &l);
bool isEmpty(SList l);
bool insertHead(SList& l, Node *p);
void docFile(FILE *&f, SList &l);
void showNode(Node *p);
void xuatFile(SList l);
void showMenu();
void HVDiemHon7(SList l);
int TinhTongHP(SList l);
bool deleteHead(SList& l);
bool deleteTail(SList& l);
void deleteDiemBeHon2(SList& l);
bool insertBefore(SList &l, Node *p, Node *q);
Node *findSNode(SList l, char x[]);
#endif