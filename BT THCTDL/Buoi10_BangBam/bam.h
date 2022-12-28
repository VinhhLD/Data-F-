#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef bam_h
#define bam_h
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

struct SinhVien
{
	char mssv[11];
	char tenHs[31];
	int namSinh;
	int diem;
};
typedef SinhVien Itemtype;

struct HashNode
{
	Itemtype key;
	HashNode* next;
};
#define SIZE 100

HashNode* bucket[SIZE];
void Menu();
int diemFirst(int key);
void initBangBam();
void push(int b, Itemtype x);
void insertAfter(HashNode* p, Itemtype k);
void place(int b, Itemtype k);
void createBTreeToFile(FILE *f);
void xuatBangBam();
int isEmptBucket(int b);
void adddiem(Itemtype& x);
void searchdiem(int c);
void deleteALL();
void process();
void xuatSVXuatSacGiamDan();
void deleteDiemX(int x);
#endif