#ifndef Btree_h
#define Btree_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
struct TNode
{
	int Info;
	TNode* Left;
	TNode* Right;
};
struct BTree
{
	TNode* Root;
};
TNode* createTNode(int x);
bool insertTNodeLeft(TNode* T, int x);
bool insertTNodeRight(TNode* T, int x);
void initBtree(BTree& bt);
bool isEmpty(BTree bt);
void showTNode(TNode* p);
void traverseNLR(TNode* root);
bool insertTNode(TNode*& root, TNode* p);
void createBTree_Auto(BTree& bt);
void showMenu();
TNode* findTNode(TNode* root, int x);
bool isLeaf(TNode* p);
bool deleteTNodeLeft(TNode* T);
bool deleteTNodeRight(TNode* T);
int countTNode(TNode* root);
int countTNodeLeaf(TNode* root);
int countTNodebchild(TNode* root);
int sumTNode(TNode* root);
int highTree(TNode* root);
int DemNodeX(TNode* root, int& dem, int x);
#endif