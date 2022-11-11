#ifndef BTree_BTVN_h
#define BTree_BTVN_h
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
struct TNode
{
	PS Info;
	TNode* Left;
	TNode* Right;
};
struct BTree
{
	TNode* Root;
};
TNode* createTNode(PS x);
void initBTree(BTree& bt);
bool insertTNodeLeft(TNode* T, PS x);
bool insertTNodeRight(TNode* T, PS x);
bool isEmpty(BTree bt);
void showTNodePS(TNode* p);
void traverseNLR(TNode* root);
bool insertTNode(TNode*& root, TNode* p);
void createBTree_Auto(BTree& bt);
void createBTree_FromArray(BTree& bt);
void createBTree_FromKeyboard(BTree& bt);
void showMenu();
#endif