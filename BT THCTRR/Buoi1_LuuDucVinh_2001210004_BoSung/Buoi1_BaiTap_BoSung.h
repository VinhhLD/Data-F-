#ifndef Buoi1_BaiTap_BoSung_h
#define Buoi1_BaiTap_BoSung_h
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define MAX 50
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//c++
#include<fstream>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct Graph
{
	int flag;
	int n;
	int m[MAX][MAX];
};

void docFileMTK(FILE *&f, Graph &G);
void xuatMTK(Graph G);
void process();
void showMenu();
void docFileDSC(Graph &G, FILE *&c, int &so_canh);
void xuatDSC(Graph G, int so_canh);
void khoiTao(Graph &G);
Graph Doc_danh_sach_ke(Graph &g);
void xuatBacCuaCacDinh(Graph G);
int tinhTongSoCanh(Graph G);
#endif