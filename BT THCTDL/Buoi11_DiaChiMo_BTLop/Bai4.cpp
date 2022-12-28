////LuuDucVinh 2001210004
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include <crtdbg.h>
//#include<string.h>
//#include<iostream>
//#include<fstream>
//using namespace std;
//struct Sach
//{
//	char maSach[5];
//	char tenSach[21];
//	int soTrang;
//	float tien;
//};
//Sach* arr;
//int soluong = 0;
//int hashTableSize = 10;
//
//void khoiTao()
//{
//	arr = new Sach[hashTableSize];
//	for (int i = 0; i < hashTableSize; i++)
//		arr[i].maSach[0] = '\0';
//}
//int hashCode(char *str)
//{
//	int s = 0;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//		s += str[i];
//	return s % hashTableSize;
//}
//void ganStruct(Sach& mot, Sach& hai)
//{
//	strcpy(mot.maSach, hai.maSach);
//	strcpy(mot.tenSach, hai.tenSach);
//	mot.soTrang = hai.soTrang;
//	mot.tien = hai.tien;
//}
//void insert(Sach sach)
//{
//	int index = hashCode(sach.maSach);
//	int count = 0;
//	while (arr[index].maSach[0] != '\0')
//	{
//		index = (index + ++count) % hashTableSize;
//	}
//	ganStruct(arr[index], sach);
//	soluong++;
//	if (soluong > hashTableSize * 60 / 100)
//	{
//		int k = hashTableSize;
//		hashTableSize = hashTableSize * 2;
//		arr = (Sach*)realloc(arr, hashTableSize * sizeof(Sach));
//		for (int t = k; t < hashTableSize; t++)
//		{
//			arr[t].maSach[0] = '\0';
//		}
//		for (int i = 0; i < k; i++)
//		{
//			if (i != hashCode(arr[i].maSach))
//			{
//				index = hashCode(arr[i].maSach);
//				count = 0;
//				while (arr[index].maSach[0] != '\0')
//				{
//					index = (index + ++count) % hashTableSize;
//				}
//				arr[index] = arr[i];
//				arr[i].maSach[0] = '\0';
//			}
//		}
//	}
//}
//void xuatStruct(Sach x)
//{
//	printf("\t%-15s%-20s%-15d%-50.3f", x.maSach, x.tenSach, x.soTrang, x.tien);
//}
//void display()
//{
//	printf("MAXSIZE: %d\n", hashTableSize);
//	printf("\t%-15s%-20s%-15s%-5s\n", "MA SACH", "TEN SACH", "SO TRANG", "TIEN");
//	for (int i = 0; i < hashTableSize; i++) {
//		if (arr[i].maSach[0] != '\0')
//		{
//			printf("[%d]= ", i);
//			xuatStruct(arr[i]);
//			printf("\n");
//		}
//		else
//		{
//			printf("[%d]= ", i);
//			printf("%s\n", arr[i].maSach);
//		}
//	}
//}
//void createFromFile()
//{
//	ifstream in;
//	Sach x;
//	const char* fileName = "sach.txt";
//	in.open(fileName);
//	if (in)
//	{
//		while (!in.eof())
//		{
//			in >> x.maSach;
//			in >> x.tenSach;
//			in >> x.soTrang;
//			in >> x.tien;
//			insert(x);
//		}
//	}
//	in.close();
//}
//void timSach(char maSachX[])
//{
//	int index = hashCode(maSachX);
//	Sach x;
//	int i = 0, check = 0;
//	while (arr[index].maSach[0] != '\0')
//	{
//		if (_strcmpi(arr[index].maSach, maSachX) == 0)
//		{
//			ganStruct(x, arr[index]);
//			check++;
//			break;
//		}
//		else
//			index = (index + ++i) % hashTableSize;
//	}
//	if (check != 0)
//	{
//		printf("Tim thay sach co ma: %s\n", arr[index].maSach);
//		xuatStruct(x);
//	}
//	else
//		printf("Khong tim thay sach co ma: %s", maSachX);
//}
//
//void nhapInfoSach(Sach& sach)
//{
//	printf("Nhap ma sach: ");
//	scanf("%s", sach.maSach);
//	printf("Nhap ten sach: ");
//	scanf("%s", sach.tenSach);
//	printf("Nhap so trang: ");
//	scanf("%d", &sach.soTrang);
//	printf("Nhap so tien: ");
//	scanf("%f", &sach.tien);
//}
//
//void extendHashTable()
//{
//	int k = hashTableSize;
//	hashTableSize *= 2;
//	int index, soLanDungDo = 0;
//	Sach* temp = arr;
//	arr = new Sach[hashTableSize];
//	for (int i = 0; i < hashTableSize; i++)
//		arr[i].maSach[0] = '\0';
//	for (int i = 0; i < k; i++)
//	{
//		if (temp[i].maSach[0] != '\0')
//		{
//			index = hashCode(temp[i].maSach);
//			soLanDungDo = 0;
//			while (arr[index].maSach[0] != '\0')
//			{
//				soLanDungDo++;
//				index = (index + soLanDungDo) % hashTableSize;
//			}
//			arr[index] = temp[i]; 
//		}
//	}
//	delete temp;
//}
//void xoa1Struct(Sach &s)
//{
//	s.maSach[0] = '\0';
//	s.tenSach[0] = '\0';
//	s.soTrang = -2;
//	s.tien = -2;
//}
//void xoaSachTheoMa(char maSachX[])
//{
//	int index = hashCode(maSachX);
//	int soLanDungDo = 0;
//	while (_strcmpi(arr[index].maSach, maSachX) != 0 && (soLanDungDo <= hashTableSize))
//	{
//		index = (index + ++soLanDungDo) % hashTableSize;
//	}
//	if (_strcmpi(arr[index].maSach, maSachX) == 0)
//	{
//		xoa1Struct(arr[index]);
//		display();
//		soluong--;
//	}
//	else
//		printf("Khong tim thay %s da nhap!\n", maSachX);
//}
//
//void main()
//{
//	khoiTao();
//	int chon, x;
//	Sach s;
//	char str[21];
//	do
//	{
//		printf("\n====================MENU====================");
//		printf("\n0. Thoat");
//		printf("\n1. Tao mang bam");
//		printf("\n2. Tim sach khi biet ma");
//		printf("\n3. Them 1 sach vao bang bam");
//		printf("\n4. Mo rong bang bam");
//		printf("\n5. Xoa 1 cuon sach theo ma sach");
//		printf("\n6. Xem thong tin cac cuon sach");
//		printf("\n============================================");
//		printf("\nNhap yeu cau: ");
//		scanf_s("%d", &chon);
//		switch (chon)
//		{
//		case 1:
//			createFromFile();
//			display();
//			break;
//		case 2:
//			printf("Nhap ma sach muon tim: ");
//			scanf("%s", str);
//			timSach(str);
//			break;
//		case 3:
//			printf("NHAP THONG TIN SACH CAN THEM!\n");
//			nhapInfoSach(s);
//			insert(s);
//			display();
//			break;
//		case 4:
//			extendHashTable();
//			display();
//			break;
//		case 5:
//			printf("Nhap 1 ma sach bat ki: ");
//			scanf("%s", str);
//			xoaSachTheoMa(str);
//			break;
//		case 6:
//			display();
//			break;
//		default:
//			break;
//		}
//	} while (chon != 0);
//	_getch();
//}