#ifndef Header_h
#define Header_h
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<queue>
using namespace std;
typedef int Itemtype;
struct Bnode
{
	Itemtype info;
	Bnode* left;
	Bnode* right;
};
struct BtreeSearch
{
	Bnode* root;
};

void docFile(FILE* f, BtreeSearch& b);
Bnode* createBnode(int x);
void menu();
void process();
int insertTNode(Bnode*& root, Bnode* p);
void showBnode(Bnode* p);
void traverseNLR(Bnode* B);
void delete1Node(Bnode*& t, int x);
void findAndReplace1(Bnode*& p, Bnode*& root);
void showNodeLevelK(Bnode* root, int k);
int sumNodeLevelK(Bnode* root, int k);
void traverseBreadthNLR(Bnode* root);
int tinhTongBoiX(Bnode* root, int x);
int demNodeKoPhaiLaOTangThuKBoiCua3(Bnode* root, int k);
Bnode* MaxSHH(Bnode* root, Bnode*& max);
void xoaNodeBoiY(Bnode* root,int x,Bnode*proot);
#endif // !Header_h

