#include"bam.h"
int main()
{
	process();
	return 0;
}
void process()
{
	initBangBam();
	int chon;
	Itemtype x;
	int c;
	int diem;
	FILE* f;
	do
	{
		Menu();
		printf("nhap lua chon cua ban\n");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			f = fopen("thongtin.txt", "rt");
			createBTreeToFile(f);
			break;
		case 2:
			xuatBangBam();
			break;
		case 3:
			adddiem(x);
			xuatBangBam;
			break;
		case 4:
			printf("nhap diem can tim\n");
			scanf_s("%d", &c);
			searchdiem(c);
			printf("\n");
			break;
		case 5:
			deleteALL();
			break;
		case 6:
			xuatSVXuatSacGiamDan();
			break;
		case 7:
			printf("nhap diem can xoa \n");
			scanf_s("%d", &diem);
			deleteDiemX(diem);
			break;
		default:
			break;
		}
	} while (chon != 0);
}

// Menu
void Menu()
{
	printf("NGUYEN HOANG GIA\n");
}

// Băng băm.
int diemFirst(int key)
{
	return key % SIZE;
}

// Khởi tạo bảng băm.
void initBangBam()
{
	for (int i = 0; i < SIZE; i++)
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
	HashNode* p;
	HashNode* q;
	q = NULL;
	for (HashNode* p = bucket[b]; p != NULL; p = p->next)
		q = p;
	if (q == NULL)
		push(b, k);
	else
		insertAfter(q, k);
}

//Nhap bang bam từ file
void createBTreeToFile(FILE*f)
{
	SinhVien x;
	int k;
	while (!feof(f))
	{
		fscanf(f, "%s", x.mssv);
		fscanf(f, "%s", x.tenHs);
		fscanf(f, "%d", &x.namSinh);
		fscanf(f, "%d", &x.diem);
		k = diemFirst(x.diem);
		place(k,x);
	}
	fclose(f);
}

// Xuất bảng băm ra màng hình.
void xuatBangBam()
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d :", i);
		for (HashNode* p = bucket[i]; p != NULL; p = p->next)
			printf("[%2s:%2s:%5d:%5d]\t", p->key.mssv, p->key.tenHs, p->key.namSinh, p->key.diem);
		printf("\n");
	}

}

// Kiểm tra hàm rỗng.(NULL = 1, != NULL = 0)
int isEmptBucket(int b)
{
	return (bucket[b] == NULL ? 1 : 0);
}


// Thêm một từ vào từ điển.
void adddiem(Itemtype& x)
{
	int k;
	getchar();
	printf("nhap mssv\n");
	gets_s(x.mssv);
	printf("nhap ten hs\n");
	gets_s(x.tenHs);
	printf("nhap nam sinh \n");
	scanf_s("%d", &x.namSinh);
	printf("nhap diem \n");
	scanf_s("%d", &x.diem);
	k = diemFirst(x.diem);
	place(k, x);
}

// Tra từ.
void searchdiem(int c)
{
	int k = diemFirst(c);
	for (HashNode* p = bucket[k]; p != NULL; p = p->next)
		if (p->key.diem == c)
		{
			printf("co hs co diem %d ", c);
			return;
		}
	printf("Tu ban tim khong ton tai.\n");
}

// xóa toàn bộ từ điển.
void deleteALL()
{
	HashNode* p;
	for (int i = 0; i < SIZE; i++)
	{
		p = bucket[i];
		delete p;
		bucket[i] = NULL;
	}
}


void xuatSVXuatSacGiamDan()
{
	printf(" DANH SACH DIEM CAC SINH VIEN THUOC LOAI XUAT SAC GIAM DAN \n");
	for (int i = 99; i >=90; i--)
	{
		for (HashNode* a = bucket[i]; a != NULL; a = a->next)
		{
			printf("[%2s:%2s:%5d:%5d]\n", a->key.mssv, a->key.tenHs, a->key.namSinh, a->key.diem);
		}
	}
}

void deleteDiemX(int x)
{
		HashNode* a = bucket[x];
		delete a;
		bucket[x] = NULL;
}