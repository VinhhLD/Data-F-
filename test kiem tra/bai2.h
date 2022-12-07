#ifndef bai2_h
#define bai2_h
#define  _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>
#include<queue>
#include<stack>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

/* Khai báo kiểu dữ liệu của Node */
typedef int ItemType;

/* Khai báo thuộc tính color */
enum EColor { RED, BLACK };
struct AV
{
	char maSach[11];
	char tenSach[31];
	char nhaXB[21];
	int namXB;
};
/* Khai báo cấu trúc node */
struct BRTNode
{
	AV Info;
	EColor Color;
	BRTNode* Left, * Right, * Parent;
};

/* Khai báo cấu trúc cây Đỏ-Đen */
struct BRTree
{
	BRTNode* Root;
};
//==================================================
BRTNode* createBRTNode(AV x);
void set_Color(int colorBackground, int colorText);
void initBRTree(BRTree& brt);

void swapColors(EColor& color1, EColor& color2);
void swapInfos(AV& info1, AV& info2);

void showBRTree_PreOrder(BRTNode* root);
void showBRTree_InOrder(BRTNode* root);
void showBRTree_PostOrder(BRTNode* root);

void levelOrder(BRTNode* root);
void showLevelOrder(BRTNode* root);

void iterativePreOrder(BRTNode* root);
void showPreOrder(BRTNode* root);
void iterativeInOrder(BRTNode* root);
void showInOrder(BRTNode* root);
void iterativePostOrder(BRTNode* root);
void showPostOrder(BRTNode* root);

BRTNode* BRTInsert(BRTNode* root, BRTNode* pNew);
void rotateLeft(BRTNode*& root, BRTNode*& p);
void rotateRight(BRTNode*& root, BRTNode*& p);
void fixViolation(BRTNode*& root, BRTNode*& p);
void insert(BRTNode*& root, AV Info);

bool isOnLeft(BRTNode* p);
bool hasRedChild(BRTNode* p);
BRTNode* findUncle(BRTNode* p);
BRTNode* findSibling(BRTNode* p);
BRTNode* findSuccessor(BRTNode* p);
void fixDoubleBlack(BRTNode*& root, BRTNode* p);
BRTNode* BSTReplace(BRTNode* p);
void deleteNode(BRTNode*& root, BRTNode* pDelete);
BRTNode* search(BRTNode* root, AV x);
void deleteByInfo(BRTNode*& root, AV x);
void createBRTree(BRTree& brt);
void deleteCay(BRTNode* root);
#endif