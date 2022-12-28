#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXSIZE 21
struct HashNode
{
	int key;
	HashNode* next;
};
HashNode* bucket[MAXSIZE];
int hashFunction(int key);
void initBucket();
void push(int b, int x);
void insertAfter(HashNode* p, int k);
void place(int b, int k);
int isEmtyBucket(int b);
int pop(int b);
int deleteAfter(HashNode* p);
void remove(int k);
void display();
void createHashTable();
void menu()
{
	printf("-----------------Menu-----------------\n");
	printf("1. Them phan tu\n");
	printf("2. Xoa phan tu\n");
	printf("3. Tim kiem phan tu\n");
	printf("4. Xoa toan bo bang\n");
	printf("--------------------------------------\n");
}
void main()
{
	int k, x, chon;
	menu();
	do
	{
		printf("Nhap lua chon: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
			case 1: 
			{
				createHashTable();
				display();
				printf("Them phan tu: ");
				scanf_s("%d", &x);
				break;
			}
			case 2:
			{

				printf("Nhap k: ");
				scanf_s("%d", &k);
				remove(k);
				display();
				break;
			}
		}
	} while (chon != 0);
	_getch();
}
int hashFunction(int key)
{
	return (key % MAXSIZE);
}
void initBucket()
{
	for (int b = 0; b < MAXSIZE; b++)
	{
		bucket[b] = NULL;
	}
}
void push(int b, int x)
{
	HashNode* p = new HashNode;
	p->key = x;
	p->next = bucket[b];
	bucket[b] = p;
}
void insertAfter(HashNode* p, int k)
{
	if (p == NULL)
		printf("\nkhong them vao node moi duoc!");
	else
	{
		HashNode* q = new HashNode;
		q->key = k;
		q->next = p->next;
		p->next = q;
	}
}
void place(int b, int k)
{
	HashNode* p = new HashNode;
	HashNode* q = new HashNode;
	q = NULL;
	for (p = bucket[b]; p != NULL && k > p->key; p = p->next)
	{
		q = p;
	}
	if (q == NULL)
		push(b, k);
	else
		insertAfter(q, k);
}
int isEmtyBucket(int b)
{
	return (bucket[b] == NULL ? 1 : 0);
}
int pop(int b)
{
	HashNode* p;
	int k;
	if (isEmtyBucket(b))
	{
		printf("Bucket %d bi rong, khong xoa duoc", b);
		return 0;
	}
	p = bucket[b];
	k = p->key;
	bucket[b] = p->next;
	delete p;
	return k;
}
int deleteAfter(HashNode* p)
{
	HashNode* q;
	int k;
	if (p == NULL || p->next == NULL)
	{
		printf("\nKhong xoa Node duoc!");
		return 0;
	}
	q = p->next;
	k = q->key;
	p->next = q->next;
	delete q;
	return k;
}
void remove(int k)
{
	int b = hashFunction(k);
	if (bucket[b] == NULL)
		printf("\nkhoa %d khong ton tai!", k);
	else
	{
		if (bucket[b]->key == k)
			pop(b);
		else
		{
			for (HashNode* i = bucket[b]; i->next != NULL; i = i->next)
			{
				if (i->next->key == k)
					deleteAfter(i);
			}
		}
		printf("\nkhoa %d da duoc xoa", k);
	}

}
void display()
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
	{
		printf("\nbucket[%d]\t", i);
		if (bucket[i] != NULL)
		{
			for (HashNode* b = bucket[i]; b != NULL; b = b->next)
			{
				printf("%d --> ", b->key);
			}
		}
		else
		{
			printf("NULL");
		}
	}
	printf("\n");
}
void createHashTable()
{
	initBucket();

	int a[] = { 4, 5, 8, 9, 1, 4, 2, 7, 9, 5 };
	for (int i = 0; i < 10; i++)
	{
		int key = hashFunction(a[i]);

		place(key, a[i]);
	}
}