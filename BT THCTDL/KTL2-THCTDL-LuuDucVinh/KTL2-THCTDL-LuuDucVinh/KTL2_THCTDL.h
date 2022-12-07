#ifndef KTL2_THCTDL_h
#define KTL2_THCTDL_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <queue>
using namespace std;
struct TSNode
{
	int Info;
	TSNode* Left;
	TSNode* Right;
};
struct BSTree
{
	TSNode* Root;
};
TSNode* createTSNode(int x);
void initBSTree(BSTree& bst);
bool insertTSNode(TSNode*& root, TSNode* p);
void showTSNode(TSNode* root);
void NLR(TSNode* root);
bool isEmpty(BSTree bst);
void showMenu();
void docFile(FILE*& f, BSTree& bst);
void traverseBreadthNLR(TSNode* root);
int CountBoisocuaX(TSNode* root, int x);
int CountTSNodeIsNoLeafLevelK(TSNode* root, int k);
bool SHH(long n);
TSNode* MaxSHH(TSNode* root, TSNode*& max);
TSNode* findTSNodeReplace(TSNode*& p);
int deleteTSNodeX(TSNode*& root, int x);
void xoaNodeBoiY(TSNode* root, int y, TSNode* p);
#endif