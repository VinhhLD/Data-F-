#include <conio.h>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <string>
#pragma once
#include <iomanip>
#include<string>
#include<Windows.h>

using namespace std;

struct av
{
	string word;
	string mean;
};

typedef av Itemtype;

struct HashNode
{
	Itemtype key;
	HashNode* next;
};


#define KEYSIZE 26

HashNode* bucket[KEYSIZE];

void Menu(const char* filename);
int wordFirst(string key);
void initBangBam();
void push(int b, Itemtype x);
void insertAfter(HashNode* p, Itemtype k);
void place(int b, Itemtype k);
void createBTreeToFile();
void xuatBangBam();
int isEmptBucket(int b);
void addWord(Itemtype &x);
void searchMean(string c);
void deleteALL();


int main()
{
	initBangBam();
	int chon;
	Itemtype x;
	string c;
	//SetConsoleOutputCP(65001);
	do
	{
    /*  system("cls");*/
		Menu("Menu1.txt");
		cout << "Nhap lua chon:";
		cin >> chon;
		switch (chon)
		{
		case 1:
			createBTreeToFile();
			break;
		case 2:
			xuatBangBam();
			break;
		case 3:
			addWord(x);
			xuatBangBam;
			break;
		case 4:
			
			cin.ignore();
			cout << "Nhap tu:";
			getline(cin,c);
			searchMean(c);
			break;
		case 5:
			deleteALL();
			break;
		default:
			break;
		}
	} while (chon != 0);
	system("pause");
    return 0;
}

// Menu
void Menu(const char* filename)
{
	ifstream in;
	in.open(filename);
	if (in)
	{

		string line;
		while (!in.eof())
		{
			getline(in, line);
			cout << line << endl;
		}
	}
	in.close();
}

// Băng băm.
int wordFirst(string key)
{
	return key[0] % KEYSIZE;
}

// Khởi tạo bảng băm.
void initBangBam()
{
	for (int i = 0; i < KEYSIZE; i++)
		bucket[i] = NULL;
}

// Thêm một node vào đầu bucket
void push(int b, Itemtype x)
{
	HashNode* p = new HashNode;
	p->key = x;
	p->next = bucket[b];
	bucket[b] = p;
}

// Thêm vào bucker một node mới sau node p.
void insertAfter(HashNode* p, Itemtype k)
{
	if (p == NULL)
		printf("khong them vao node moi dc.\n");
	else
	{
		HashNode* q = new HashNode;
		q->key = k;
		q->next = p->next;
		p->next = q;
	}
}


// Chèn khóa k vào trong một danh sách liên kết.
void place(int b, Itemtype k)
{
	HashNode* p, *q;
	q = NULL;
	for (HashNode* p = bucket[b]; p != NULL; p = p->next)
		q = p;
	if (q == NULL)
		push(b, k);
	else
		insertAfter(q, k);
}

//Nhap bang bam từ file
void createBTreeToFile()
{
	fstream filein;
	filein.open("tudien.txt", ios::in);
	Itemtype x;
	int k;
	while (!filein.eof())
	{
		getline(filein, x.word ,':');
		getline(filein, x.mean, '\n');
		k = wordFirst(x.word);
		place(k, x);
	}
	filein.close();
}

// Xuất bảng băm ra màng hình.
void xuatBangBam()
{
	for (int i = 0; i < KEYSIZE; i++)
	{
		printf("%3d :", i);
		for (HashNode* p = bucket[i]; p != NULL; p = p->next)
			cout << '[' << p->key.word << ':' << p->key.mean << "]\t" ;
		printf("\n");
	}
}

// Kiểm tra hàm rỗng.(NULL = 1, != NULL = 0)
int isEmptBucket(int b)
{
	return (bucket[b] == NULL ? 1 : 0);
}


// Thêm một từ vào từ điển.
void addWord(Itemtype &x)
{
	int k;
	cin.ignore();
	cout << "Nhap tu:";
	getline(cin, x.word);
	cout << "Nhap nghia:";
	getline(cin, x.mean);
	k = wordFirst(x.word);
	place(k, x);
}

// Tra từ.
void searchMean(string c)
{
	int k = wordFirst(c);
	for (HashNode* p = bucket[k]; p != NULL; p = p->next)
		if (p->key.word == c)
		{
			cout << "Tu ban tim co nghia la: " << p->key.mean << '\n';
			return;
		}
	printf("Tu ban tim khong ton tai.\n");
}

// xóa toàn bộ từ điển.
void deleteALL()
{
	HashNode *p;
	for (int i = 0; i < KEYSIZE; i++)
	{
		p = bucket[i];
		delete p;
		bucket[i] = NULL;
	}
}

