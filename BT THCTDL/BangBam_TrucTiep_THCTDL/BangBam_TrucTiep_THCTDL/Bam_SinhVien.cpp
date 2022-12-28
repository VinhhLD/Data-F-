#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "conio.h"
#include "string.h"
#define KEYSIZE 101
struct SV
{
	char mssv[11];
	char hovaten[30];
	int namsinh;
	int diem;
};
struct HashNode
{
	SV Key;
	HashNode* Next;
};
HashNode* bucket[KEYSIZE];
int HashFunction(int Key);
void initBucket();
bool IsEmptyBucket(int b);
void Push(int b, SV x);
void InsertAfter(HashNode* p, SV k);
void Place(int b, SV k);
bool IsEmpty();
void Insert(SV k);
void FreeNode(HashNode* p);
void Pop(int b);
void DeleteAfter(HashNode* p);
void Remove(SV k);
void ClearBucket(int b);
void Clear();
void TraverseBucket(int b);
void Traverse();
HashNode* Search(SV k);
void showMenu();
//void createHashTableKeyboard(int& n);
void docFile(FILE*& f);
void xuatsvxuatsacgiamdan();
void deleteDiemx(int b);
int main()
{
	initBucket();
	int chon;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
	/*	case 1:
		{
			int n;
			createHashTableKeyboard(n);
			break;
		}*/
		case 2:
		{
			FILE* f;
			docFile(f);
			break;
		}
		case 3:
		{
			Traverse();
			break;
		}
		case 4:
		{
			SV x;
			getchar();
			printf("Nhap thong tin sinh vien muon tim:\n");
			printf("Nhap MSSV: ");
			gets_s(x.mssv);
			printf("Nhap HovaTen: ");
			gets_s(x.hovaten);
			printf("Nhap nam sinh: ");
			scanf("%d", &x.namsinh);
			printf("Nhap diem: ");
			scanf("%d", &x.diem);
			HashNode* p = Search(x);
			if (p == NULL)
			{
				printf("Khong ton tai sinh vien %s trong bang bam\n", x.hovaten);
			}
			else
			{
				printf("Ton tai sinh vien %s trong bang bam\n", p->Key.hovaten);
			}
			break;
		}
		case 5:
		{
			SV x;
			getchar();
			printf("Nhap thong tin sinh vien muon tim:\n");
			printf("Nhap MSSV: ");
			gets_s(x.mssv);
			printf("Nhap HovaTen: ");
			gets_s(x.hovaten);
			printf("Nhap nam sinh: ");
			scanf("%d", &x.namsinh);
			printf("Nhap diem: ");
			scanf("%d", &x.diem);
			HashNode* p = Search(x);
			Remove(x);
			break;
		}
		case 6:
		{
			xuatsvxuatsacgiamdan();
			break;
		}
		case 7:
		{
			int x;
			printf("Nhap diem de xoa tat ca sinh vien co diem bang: "); scanf("%d", &x);
			deleteDiemx(x);
			break;
		}
		}
	} while (chon != 0);
	getch();
	return 0;
}
int HashFunction(int Key)
{
	return Key % KEYSIZE;
}
void initBucket()
{
	for (int i = 0; i < KEYSIZE; i++)
	{
		bucket[i] = NULL;
	}
}
bool IsEmptyBucket(int b)
{
	return bucket[b] == NULL;
}
void Push(int b, SV x)
{
	HashNode* p = new HashNode;
	p->Key = x;
	p->Next = bucket[b];
	bucket[b] = p;
}
void InsertAfter(HashNode* p, SV k)
{
	if (p == NULL)
	{
		printf("Khong the them vao node moi duoc\n");
	}
	else
	{
		HashNode* q = new HashNode;
		q->Key = k;
		q->Next = p->Next;
		p->Next = q;
	}
}
void Place(int b, SV k)
{
	HashNode* q, * p;
	q = NULL;
	for (p = bucket[b]; p != NULL && k.mssv > p->Key.mssv; p = p->Next)
	{
		q = p;
	}
	if (q == NULL)
	{
		Push(b, k);
	}
	else
	{
		InsertAfter(q, k);
	}
}
bool IsEmpty()
{
	for (int b = 0; b < KEYSIZE; b++)
	{
		if (bucket[b] != NULL)
		{
			return 0;
		}
	}
	return 1;
}
void Insert(SV k)
{
	int b = HashFunction(k.diem);
	Place(b, k);
}
void FreeNode(HashNode* p)
{
	delete p;
}
void Pop(int b)
{
	HashNode* p;
	SV k;
	if (IsEmptyBucket(b))
	{
		printf("Bucket %d bi rong, ko xoa dc", b);
		return;
	}
	p = bucket[b];
	k = p->Key;
	bucket[b] = p->Next;
	FreeNode(p);
}
void DeleteAfter(HashNode* p)
{
	HashNode* q;
	SV k;
	if (p == NULL || p->Next == NULL)
	{
		printf("Khong xoa node duoc\n");
		return;
	}
	q = p->Next;
	k = q->Key;
	p->Next = q->Next;
	FreeNode(q);
}
void Remove(SV k)
{
	HashNode* q = NULL, * p;
	int b = HashFunction(k.diem);
	p = bucket[b];
	while (p != NULL && p->Key.diem != k.diem)
	{
		q = p;
		p = p->Next;
	}
	if (p == NULL)
	{
		printf("Khong co tim thay sinh vien %s\n", k.hovaten);
	}
	else if (p == bucket[b])
	{
		Pop(b);
		printf("Da xoa thanh cong sinh vien %s\n", k.hovaten);
	}
	else
	{
		DeleteAfter(q);
		printf("Da xoa thanh cong sinh vien %s\n", k.hovaten);
	}
}
void ClearBucket(int b)
{
	HashNode* q, * p;
	q = NULL;
	p = bucket[b];
	while (p != NULL)
	{
		q = p;
		p = p->Next;
		FreeNode(q);
	}
	bucket[b] = NULL;
}
void Clear()
{
	for (int b = 0; b < KEYSIZE; b++)
	{
		ClearBucket(b);
	}
}
void TraverseBucket(int b)
{
	HashNode* p = bucket[b];
	while (p != NULL)
	{
		printf("[%s:%s:%d:%d]", p->Key.mssv, p->Key.hovaten, p->Key.namsinh, p->Key.diem);
		p = p->Next;
	}
}
void Traverse()
{
	for (int b = 0; b < KEYSIZE; b++)
	{
		printf("[%d]: ", b);
		TraverseBucket(b);
		printf("\n");
	}
}
HashNode* Search(SV k)
{
	int b = HashFunction(k.diem);
	HashNode* p = bucket[b];
	for (; p != NULL; p = p->Next)
	{
		if (strcmpi(p->Key.mssv, k.mssv) == 0)
		{
			return p;
		}
	}
	return NULL;
}
void showMenu()
{
	printf("1. Tao bang bam tu ban phim\n");
	printf("2. Tao bang bam tu doc file\n");
	printf("3. Xuat bang bam\n");
	printf("4. Tim pt co trong bang bam ko\n");
	printf("5. Xoa pt trong bang bam\n");
	printf("6. Xuat sv xuat sac giam dan\n");
	printf("7. Xoa tat ca sv co diem bang x\n");
}
//void createHashTableKeyboard(int& n)
//{
//	printf("Nhap so luong pt: "); scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		printf("Nhap gia tri pt thu %d: ", i); scanf("%d", &k);
//		Insert(k);
//	}
//}
void docFile(FILE*& f)
{
	f = fopen("Sinhvien.txt", "rt");
	SV x;
	while (!feof(f))
	{
		fscanf(f, "%[^#]%*c%[^#]%*c%d#%d\n", x.mssv, x.hovaten, &x.namsinh, &x.diem);
		Insert(x);
	}
	fclose(f);
}
void xuatsvxuatsacgiamdan()
{
	printf(" DANH SACH DIEM CAC SINH VIEN THUOC LOAI XUAT SAC GIAM DAN \n");
	for (int i = 100; i >= 90; i--)
	{
		for (HashNode* p = bucket[i]; p != NULL; p = p->Next)
		{
			printf("[%s:%s:%d:%d]", p->Key.mssv, p->Key.hovaten, p->Key.namsinh, p->Key.diem);
		}
		printf("\n");
	}
}
void deleteDiemx(int b)
{
	HashNode* p = bucket[b];
	delete p;
	bucket[b] = NULL;
}