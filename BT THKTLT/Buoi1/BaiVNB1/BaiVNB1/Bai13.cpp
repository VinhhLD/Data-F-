//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//#include <string.h>
//void nhapM1CA_Random (int *&a, int &na);
//void nhapM1CB_Random (int *&b, int &nb);
//void xuatM1C(int *a, int n);
//void Chia_PTMangA_Cho_PTMangB (int *a, int na, int *b, int nb);
//int main ()
//{
//	int *a, *b;
//	int na, nb;
//	nhapM1CA_Random(a, na);
//	xuatM1C(a, na);
//	nhapM1CB_Random(b, nb);
//	xuatM1C(b, nb);
//	Chia_PTMangA_Cho_PTMangB(a, na, b, nb);
//	xuatM1C(a, na);
//	xuatM1C(b, nb);
//	return 0;
//	getch ();
//}
//void nhapM1CA_Random (int *&a, int &na)
//{
//	printf("Nhap so luong PT mang A: "); scanf("%d", &na);
//	a = (int *)malloc(na*sizeof(int));
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < na; i++)
//	{
//		*(a + i) = rand() % 100;
//	}
//}
//void nhapM1CB_Random (int *&b, int &nb)
//{
//	printf("Nhap so luong PT mang B: "); scanf("%d", &nb);
//	b = (int *)malloc(nb*sizeof(int));
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < nb; i++)
//	{
//		*(b + i) = rand() % 100;
//	}
//}
//void xuatM1C(int *a, int n)
//{
//	printf("Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//	for(int i = 0; i < n; i++)
//	{
//		printf("\nPhan tu thu %d co gia tri %d va dia chi o nho la %x\n", i, *(a + i), a + i);
//	}
//}
//void Chia_PTMangA_Cho_PTMangB (int *a, int na, int *b, int nb)
//{
//	float *ab;
//	ab = (float *)malloc(nb*sizeof(float));
//	for (int i = 0; i < na; i++)
//	{
//		printf("PT %d cua mang A chia cho PT cua mang B:\n", *(a + i));
//		for (int j = 0; j < nb; j++)
//		{
//			if (b[j] == 0)
//			{
//				printf("\t%d : %d = %s\n", *(a + i), *(b + j), "Loi chia cho 0");
//			}
//			else
//			{
//				*(ab + j) = (float)*(a + i) / *(b + j);
//				printf("\t%d : %d = %.3f\n", *(a + i), *(b + j), *(ab + j));
//			}
//		}
//	}
//}