#ifndef Buoi6_BSTree_BTLop_h
#define Buoi6_BSTree_BTLop_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <queue>
#include <math.h>
using namespace std;
struct PS
{
	int ts, ms;
};
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
struct TSNodePS
{
	PS Info;
	TSNodePS* Left;
	TSNodePS* Right;
};
struct BSTreePS
{
	TSNodePS* Root;
};
TSNode* createTSNode(int x);
void initBSTree(BSTree& bst);
bool insertTSNode(TSNode*& root, TSNode* p);
void showTSNode(TSNode *root);
void NLR(TSNode* root);
void NRL(TSNode* root);
void LNR(TSNode* root);
void RNL(TSNode* root);
void LRN(TSNode *root);
void RLN(TSNode *root);
void createBSTree_Auto(BSTree& bst);
void showMenu1();
void createBSTree_Array(BSTree& bst);
void createBSTree_Keyboard(BSTree& bst);
bool isEmpty(BSTree bst);
void traverseBreadthNLR(TSNode* root);
TSNode *findTSNode(TSNode *root, int x);
int deleteTSNodeX(TSNode*& root, int x);
void deleteTree(TSNode*& root);
TSNode* MaxTSNode(TSNode* root);
TSNode* MinTSNode(TSNode* root);
int CountGreaterThanX(TSNode *root, int x);
int TongDuong(TSNode* root);
int TongAm(TSNode* root);
TSNodePS* createTSNodePS(PS x);
void initBSTreePS(BSTreePS& bst);
int sosanhPS(PS x, PS y);
bool insertTSNodePS(TSNodePS*& root, TSNodePS* p);
void createBSTreePS_Auto(BSTreePS& bstPS);
void showTSNodePS(TSNodePS *root);
void NLRPS(TSNodePS* root);
void showMenu2();
void showMenu3();
void SHT(TSNode* root);
bool SNT(TSNode* root);
void showTSNodeLevelK(TSNode* root, int k);
int hightBSTree(TSNode* root);
int CountTSNodeIsLeafEven(TSNode* root, int& count);
int CountTSNodeHave1ChildIsSNT(TSNode* root, int &dem);
bool SCP(TSNode* root);
int CountTSNodeHave2ChildIsSCP(TSNode* root, int &dem);
int CountTSNodeLevelK(TSNode* root, int k);
int DemTangThapHonK(TSNode* root, int k);
int DemTangCaoHonK(TSNode* root, int k);
int SumTSNodeOdd(TSNode* root);
int SumTSNodeIsLeafEven(TSNode* root);
int SumTSNodeHave1ChildIsSNT(TSNode* root, int& dem);
int SumTSNodeHave2ChildIsSCP(TSNode* root, int& dem);
#endif