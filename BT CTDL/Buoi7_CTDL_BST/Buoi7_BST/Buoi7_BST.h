#ifndef Buoi7_BST_h
#define Buoi7_BST_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
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
void initBST(BSTree& bst);
int insertTSNode(TSNode*& root, TSNode* p);
void NLR(TSNode* root);
void createBSTree_Auto(BSTree& bst);
void showMenu();
void createBSTree_Array(BSTree& bst, int a[]);
int countTSNodeEven(TSNode* root);
int TimPTAmMax(TSNode* root);
#endif