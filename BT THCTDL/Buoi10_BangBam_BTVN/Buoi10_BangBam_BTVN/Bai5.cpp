#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
using namespace std;
#define MAXSIZE 52

struct User
{
	char taiKhoan[21];
	char matKhau[21];
};
typedef User ItemType;
struct HashNode
{
	ItemType key;
	HashNode* next;
};
HashNode* Bucket[MAXSIZE];

void createHashTable_ReadFile();
void traverse();
void logIn(ItemType x);

void main()
{
	ItemType x;
	char y;
	createHashTable_ReadFile();
	traverse();
	do
	{
		printf("\n");
		printf("Nhap tai khoan vao day: ");
		scanf("%s", x.taiKhoan);
		printf("Nhap mat khau vao day: ");
		scanf("%s", x.matKhau);
		printf("\n-------------------------------------------\n");
		logIn(x);
		printf("\n-------------------------------------------\n");
		_getch();
		printf("=====Ban co muon tiep tuc???=====");
		printf("\n=====Neu muon tiep tuc chuong trinh an 1 nut bat ki tren ban phim!!!\nNeu muon thoat chuong trinh nhap 'Y' hoac 'y'!!!=====");
		rewind(stdin);
		printf("\nLua chon: ");
		scanf("%c", &y);
	} while (y != 'Y' && y != 'y');
	_getch();
}

char lay1KiTu(char x[])
{
	if (x[0] > 64 && x[0] < 91)
		return x[0] - 65;
	else
		return x[0] - 71;
}

int hashFunction(ItemType key)
{
	return (lay1KiTu(key.taiKhoan) % MAXSIZE);
}

void ganStruct(ItemType& x, ItemType& y)
{
	strcpy(x.taiKhoan, y.taiKhoan);
	strcpy(x.matKhau, y.matKhau);
}

void initBucket()
{
	for (int i = 0; i < MAXSIZE; i++)
		Bucket[i] = NULL;
}

void push(int b, ItemType key)
{
	HashNode* p = new HashNode;
	ganStruct(p->key, key);
	p->next = Bucket[b];
	Bucket[b] = p;
}

void insertAfter(HashNode* p, ItemType key)
{
	if (!p)
	{
		printf("Khong ton tai node p");
		return;
	}
	HashNode* q = new HashNode;
	ganStruct(q->key, key);
	q->next = p->next;
	p->next = q;
}

void place(int b, ItemType key)
{
	HashNode* q;
	q = NULL;
	for (HashNode* p = Bucket[b]; (p != NULL && (_strcmpi(p->key.taiKhoan, key.taiKhoan) < 0)); p = p->next)
		q = p;
	if (!q)
		push(b, key);
	else
		insertAfter(q, key);
}

void Insert(ItemType key)
{
	int b = hashFunction(key);
	place(b, key);
}

bool isEmpty(int b)
{
	return (!Bucket[b] ? true : false);
}

void createHashTable_ReadFile()
{
	ItemType x;
	ifstream in;
	const char* fileName = "Data_User.txt";
	in.open(fileName);
	if (in)
	{
		while (!in.eof())
		{
			in >> x.taiKhoan;
			in >> x.matKhau;
			Insert(x);
		}
	}
	in.close();
}

void traverseBucket(int b)
{
	for (HashNode* p = Bucket[b]; p != NULL; p = p->next)
		printf("[%s]-[%s]\t\t", p->key.taiKhoan, p->key.matKhau);
}

void traverse()
{
	for (int i = 0; i < MAXSIZE; i++)
	{
		printf("\n[%d]: ", i);
		traverseBucket(i);
		printf("\n");
	}
}
void logIn(ItemType x)
{
	bool check = false;
	int b = hashFunction(x);
	for (HashNode* p = Bucket[b]; p != NULL; p = p->next)
	{
		if (strcmp(x.taiKhoan, p->key.taiKhoan) == 0 && strcmp(x.matKhau, p->key.matKhau) == 0)
		{
			check = true;
			break;
		}
	}
	if (check == true)
		printf("Tai khoan co ten: %s dang nhap thanh cong", x.taiKhoan);
	else
		printf("Dang nhap sai tai khoan hoac mat khau!!! Loi dang nhap!!!");
}