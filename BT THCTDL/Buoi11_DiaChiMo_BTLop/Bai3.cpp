////LuuDucVinh 2001210004
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<ctype.h>
//
//int* arr;
//#define hashTableSize 27
//
//int hashCode(char c)
//{
//	return (c - 16) % hashTableSize;
//}
//void khoiTao()
//{
//	arr = new int[hashTableSize];
//	for (int i = 0; i < hashTableSize; i++)
//		arr[i] = 0;
//}
//void demSoLanXuatHien(char str[])
//{
//	_strlwr(str);
//	int n = strlen(str);
//	int b;
//	for (int i = 0; i < n; i++)
//	{
//		b = hashCode(str[i]);
//		if (arr[b] != 0)
//			arr[b]++;
//		else
//			arr[b] = 1;
//	}
//}
//void display()
//{
//	for (int i = 0; i < hashTableSize; i++) 
//	{
//		if (arr[i] != 0)
//			printf("|%c|= %d\n", i+97, arr[i]);
//	}
//}
//
//void main()
//{
//	char str[21];
//	khoiTao();
//	printf("Nhap chuoi: ");
//	scanf("%s", str);
//	demSoLanXuatHien(str);
//	display();
//	_getch();
//}