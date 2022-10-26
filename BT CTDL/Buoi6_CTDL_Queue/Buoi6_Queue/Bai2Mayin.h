#ifndef Bai2Mayin_h
#define Bai2Mayin_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef char ItemType;
struct QNode
{
	ItemType Info;
	QNode* Next;
};
struct Queue
{
	QNode* head;
	QNode* tail;
};
QNode* createQNode(ItemType x);
void pushQ(Queue& qu, QNode* p);
QNode* popQ(Queue& qu);
bool isEmpty(Queue qu);
void initQueue(Queue& qu);
void KhoiTao(char a[], char b[], char c[]);
void KhoitaoDSin(Queue &qu, char a[], char b[], char c[], char d[]);
#endif