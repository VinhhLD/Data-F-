#ifndef Buoi4_Queue_BTVN
#define Buoi4_Queue_BTVN
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Hang
{
	char MaHang[11];
	char TenHang[31];
	char DonViTinh[31];
	int soluong;
};
struct  QNode
{
	Hang Info;
	QNode* Next;
};
struct Queue
{
	QNode* head;
	QNode* tail;
};
QNode *createQNode(Hang x);
void initQueue(Queue& qu);
bool isEmpty(Queue qu);
bool pushQ(Queue& qu, QNode* p);
QNode* popQ(Queue& qu);
void showQNode(QNode* p);
void docFile(FILE*& f, Queue& qu);
void xuatFile(Queue qu);
void showMenu();
QNode* top(Queue qu);
QNode* findQNode(Queue qu, char x[]);
void deleteALL(Queue& qu);
#endif