//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//void NhapM1C (int a[], int &n);
//void XuatM1C (int a[], int n);
//int kiemtrasnt (long n);
//void demSNT (int a[], int n);
//int kiemtra (long n);
//void XuatPT_ToanSoLe (int a[], int n);
//void Timvitrilonnhat (int a[], int n);
//int kiemtrachan (int a[], int n);
//int kiemtrachanle (int a[], int n);
//int main ()
//{
//	int a[MAX], n, chon;
//	do
//	{
//		printf("1.Nhap mang\n");
//		printf("2.Xuat mang\n");
//		printf("3.Dem so pt nguyen to trong a\n");
//		printf("4.Xuat cac pt ma tung chu so cua no la so le\n");
//		printf("5.Tim vi tri so lon nhat (cuoi cung) cua mang\n");
//		printf("6.Kiem tra mang co toan la so chan khong\n");
//		printf("7.Kiem tra mang co phai la day so chan le xen ke khong\n");
//		printf("Chon chuc nang: "); scanf_s("%d", &chon);
//		switch (chon)
//		{
//			case 1:
//				{
//					NhapM1C(a, n);
//					break;
//				}
//			case 2:
//				{
//					XuatM1C(a, n);
//					break;
//				}
//			case 3:
//				{
//					demSNT(a, n);
//					break;
//				}
//			case 4:
//				{
//					XuatPT_ToanSoLe(a, n);
//					break;
//				}
//			case 5:
//				{
//					Timvitrilonnhat(a, n);
//					break;
//				}
//			case 6:
//				{
//					if (!kiemtrachan(a, n))
//					{
//						printf("\nKhong hoan toan la so chan\n");
//					}
//					else
//					{
//						printf("\nMang toan so chan\n");
//					}
//					break;
//				}
//			case 7:
//				{
//					int i = kiemtrachanle(a, n);
//					if (i)
//						printf("\nCac phan tu cua mang xen ke chan le\n");
//					else
//						printf("\nCac phan tu cua mang khong xen ke chan le\n");
//					break;
//				}
//		}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void NhapM1C (int a[], int &n)
//{
//	printf("Nhap so luong phan tu cua mang: "); scanf_s("%d", &n);
//	if (n <= 0)
//	{
//		throw "- Khong hop le. Vui long nhap lai!";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nNhap phan tu thu a[%d]: ", i); scanf_s("%d", &a[i]);
//	}
//}
//void XuatM1C (int a[], int n)
//{
//	printf("Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//}
//int kiemtrasnt (long n)
//{
//	int dem = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			dem++;
//		}
//	}
//	if (dem == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void demSNT (int a[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if(kiemtrasnt(a[i]))
//		{
//			dem++;
//			printf("\n%d la so nguyen to", a[i]);
//		}
//		else
//		{
//			printf("\n%d khong phai la so nguyen to", a[i]);
//		}
//	}
//	printf("\n=> Mang nay co %d so nguyen to\n", dem);
//}
//int kiemtra (long n)
//{
//	while (n > 0)
//	{
//		if (n % 2 == 0)
//		{
//			return 0;
//			break;
//		}
//	n = n / 10;
//	}
//	return 1;
//}
//void XuatPT_ToanSoLe (int a[], int n)
//{
//	int dem = 0;
//	printf("Xuat cac PT ma tung chu so la so le: ");
//	for (int i = 0; i < n; i++)
//	{
//		if (kiemtra(a[i]) == 1)
//		{
//			dem++;
//			printf("%5d", a[i]);
//		}
//	}
//	if (dem == 0)
//	{
//		printf("Mang toan cac PT ma tung chu so la so chan!\n");
//	}
//	else
//	{
//		printf("\n");
//	}
//}
//void Timvitrilonnhat (int a[], int n)
//{
//	int max = a[0];
//	int vt;
//	for (int i = 0; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (max == a[i])
//		{
//			vt = i;
//		}
//	}
//	printf("Vi tri co gia tri lon nhat (cuoi cung) trong ma tran: %d\n", vt);
//}
//int kiemtrachan (int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 != 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int kiemtrachanle (int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//		if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
//			return 0;
//	return 1;
//}