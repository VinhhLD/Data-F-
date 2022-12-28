////LuuDucVinh 2001210004
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include <crtdbg.h>
//#include<math.h>
//int* arr;
//int size = 0;
//int hashTableSize = 10;//so phan tu trong hashTable
//void khoiTao()
//{
//	arr = new int[hashTableSize];
//	for (int i = 0; i < hashTableSize; i++)
//		arr[i] = -1;
//}
//int hashCode(int key)
//{
//	return key % hashTableSize;
//}
//void insert(int key)
//{
//	int index = hashCode(key);
//	int count = 0;
//	while (arr[index] != -1)
//	{
//		++count;
//		index = index + (count * count) % hashTableSize;
//	}
//	arr[index] = key;
//	size++;
//	if (size > hashTableSize * 60 / 100)
//	{
//		int k = hashTableSize;
//		hashTableSize = hashTableSize * 2;
//		arr = (int*)realloc(arr, hashTableSize * sizeof(int));
//		for (int t = k; t < hashTableSize; t++)
//		{
//			arr[t] = -1;
//		}
//		for (int i = 0; i < k; i++)
//		{
//			if (i != hashCode(arr[i]))
//			{
//				index = hashCode(arr[i]);
//				count = 0;
//				while (arr[index] != -1)
//				{
//					++count;
//					index = (index + (count * count)) % hashTableSize;
//				}
//				arr[index] = arr[i];
//				arr[i] = -1;
//			}	
//		}
//	}
//}
//void display()
//{
//	for (int i = 0; i < hashTableSize; i++) {
//		if (arr[i] != -1)
//			printf("|%d|= %d\n", i, arr[i]);
//		else
//			printf("\n");
//	}
//}
//void random(int n)
//{
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		x = rand() % 100;
//		insert(x);
//	}
//}
//void deleteNode(int key)
//{
//	int index = hashCode(key);
//	int x = 0, i = 0;
//	while (arr[index] != -1)
//	{
//		if (arr[index] == key)
//		{
//			x = arr[index];
//			break;
//		}
//		else
//		{
//			++i;
//			index = (index + (i * i)) % hashTableSize;
//		}
//	}
//	if (x == 0)
//		printf("Khong tim thay %d ban da nhap nen khong xoa duoc!!!\n", key);
//	else
//		arr[index] = -2;
//}
//void them1Node(int key)
//{
//	int index = hashCode(key), count = 0;
//	while (arr[index] != -1)
//	{
//		++count;
//		index = (index + (count * count)) % hashTableSize;
//	}
//	arr[index] = key;
//}
//void timKiemNode(int key)
//{
//	int index = hashCode(key);
//	int i = 0, x = 0;
//	while (arr[index] != -1)
//	{
//		if (arr[index] == key)
//		{
//			x = arr[index];
//			break;
//		}
//		else
//		{
//			++i;
//			index = (index + (i * i)) % hashTableSize;
//		}
//	}
//	if (x == 0)
//		printf("Khong tim thay %d ban da nhap!!!\n", key);
//	else
//		printf("Da tim thay %d!!!\n", key);
//}
//void main()
//{
//	khoiTao();
//	int chon, x;
//	do
//	{
//		system("cls");
//		printf("====================MENU====================");
//		printf("\n0: Thoat");
//		printf("\n1: Tao mang bam");
//		printf("\n2: Them 1 phan tu");
//		printf("\n3: Xuat bang bam");
//		printf("\n4: Xoa 1 phan tu bat ki");
//		printf("\n5: Tim kiem 1 gia tri bat ki");
//		printf("\n============================================");
//		printf("\nNhap yeu cau: ");
//		scanf_s("%d", &chon);
//		switch (chon)
//		{
//		case 1:
//			printf("\nNhap so luong n: ");
//			scanf_s("%d", &x);
//			random(x);
//			display();
//			_getch();
//			break;
//		case 2:
//			printf("Nhap gia tri 1 node x: ");
//			scanf_s("%d", &x);
//			them1Node(x);
//			break;
//		case 3:
//			printf("HashTableSize = %d\n", hashTableSize);
//			display();
//			_getch();
//			break;
//		case 4:
//			printf("Nhap gia tri can xoa: ");
//			scanf_s("%d", &x);
//			deleteNode(x);
//			display();
//			_getch();
//			break;
//		case 5:
//			printf("Nhap gia tri can tim: ");
//			scanf_s("%d", &x);
//			timKiemNode(x);
//			_getch();
//			break;
//		default:
//			break;
//		}
//	} while (chon != 0);
//	_getch();
//}