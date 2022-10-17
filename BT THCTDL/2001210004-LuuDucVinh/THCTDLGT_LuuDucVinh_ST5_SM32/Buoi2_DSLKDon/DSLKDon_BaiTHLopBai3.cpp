//#include "DSLKDon_BaiTHLopBai3.h"
//NODEst* creatNodest(LopHoc X)
//{
//	NODEst* p = new NODEst;
//	p->data = X;
//	p->pNext = NULL;
//	return p;
//}
//void docFileLopHoc(FILE* &f, LISTst& L)
//{
//	LopHoc a;
//	f = fopen("file3.txt", "rt");
//	if (f == NULL)
//	{
//		printf("loi\n");
//	}
//	while (!feof(f))
//	{
//		fscanf(f, "%s%s%s%d%s%s%d%f%f\n", &a.mssv, &a.hoDem, &a.tenSV, &a.namSinh, &a.diemKQ.maMH, &a.diemKQ.tenMH, &a.diemKQ.soTC, &a.diemKQ.diemTL, &a.diemKQ.diemCK);
//		NODEst* p = creatNodest(a);
//		insertNodeHeadst(p, L);
//	}
//}
//void showListst(LISTst l)
//{
//	printf("%5s%13s%10s%10s%10s%13s%10s%13s%13s%10s\n", "MSSV", "HO DEM", "TEN", "NAMSINH", "MAMONHOC", "TENMONHOC", "SOTC", "DIEMTL", "DIEMCUOIKI", "DIEM TONG");
//	for (NODEst* k = l.pHead; k != NULL; k = k->pNext)
//	{
//		printf("%s%8s%10s%10d%10s%10s%11d%12.f%11.f%12.2f\n", k->data.mssv, k->data.hoDem, k->data.tenSV, k->data.namSinh, k->data.diemKQ.maMH, k->data.diemKQ.tenMH, k->data.diemKQ.soTC, k->data.diemKQ.diemTL, k->data.diemKQ.diemCK, ((k->data.diemKQ.diemTL * 30 + k->data.diemKQ.diemCK * 70) / 100));
//	}
//	printf("\n");
//}
//bool isEmptyst(LISTst l)
//{
//	return l.pHead == NULL;
//}
//
//bool insertNodeHeadst(NODEst* p, LISTst& l)
//{
//	if (p == NULL)
//		return false;
//	if (isEmptyst(l) == true)
//	{
//		l.pHead = l.pTail = p;
//	}
//	else
//	{
//		p->pNext = l.pHead;
//		l.pHead = p;
//	}
//	return true;
//}
//
//bool deleteHeadst(LISTst& l, NODEst* p)
//{
//	if (p == NULL)
//		return false;
//	if (isEmptyst(l) == true)
//		return false;
//	if (l.pHead != NULL)
//	{
//		p = l.pHead;
//		l.pHead = l.pHead->pNext;
//	}
//	if (l.pHead == NULL)
//	{
//		l.pTail = NULL;
//	}
//	return true;
//}
//
//void process()
//{
//
//	FILE* f;
//	LISTst LH;
//	int choose;
//
//	printf("0. thoat\n");
//	printf("1. xuat ds\n");
//	do
//	{
//		printf("lua chon chuc nang \n");
//		scanf("%d", &choose);
//		switch (choose)
//		{
//		case 0:
//			printf("thoat\n");
//			break;
//		case 1:
//			LH.pHead = LH.pTail = NULL;
//			docFileLopHoc(f, LH);
//			showListst(LH);
//			break;
//		}
//	} while (choose != 0);
//}