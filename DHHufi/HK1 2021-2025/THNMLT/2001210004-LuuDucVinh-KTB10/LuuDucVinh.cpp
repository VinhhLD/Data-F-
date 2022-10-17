#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAXSIZE 100
void Docmatran (int a[][MAXSIZE], int &n);
void xuatMaTranVuong (int a[][MAXSIZE], int n);
void tinhTong_Tamgiacduoi (int a[][MAXSIZE], int n);
void KT_PTnamtrendgcheophu (int a[][MAXSIZE], int n);
struct Lopnganhan
{
	char malop[11];
	char tenlop[41];
	int sisolop;
	float Hocphi;
	char Hinhthuchoc[30];
};
void DocfileStruct (FILE *&y, Lopnganhan dsLNH[], int &b);
void xuat1_LNH (Lopnganhan LNH);
void xuatds_LNH (Lopnganhan dsLNH[], int b);
void DemOnline (Lopnganhan dsLNH[], int b);
void xoa_vitriofline (Lopnganhan dsLNH[], int &b, int x);
void xoa_cacKL_Offline (Lopnganhan dsLNH[], int &b);
void TimMax_Tongthu (Lopnganhan dsLNH[], int n);
int main ()
{
	FILE *y;
	Lopnganhan dsLNH[MAXSIZE];
	int a[MAXSIZE][MAXSIZE];
	int chon;
	int n;
	int b;
	do
	{
	printf("===============Menu Bai 1===============\n");
	printf("1.Nhap ma tran tu file txt\n");
	printf("2.Xuat ma tran vuong\n");
	printf("3.Tinh tong cac PT nam trong tam giac duoi\n");
	printf("4.Kiem tra ma tran da cho co phai la ma tran ma cac PT nam tren duong cheo phu deu bang 0 hay khong?\n");
	printf("5.In ra cot chua nhieu so duong nhat. Neu co nhieu cot chua so luong duong bang nhau va nhieu nhat thi tra cot dau tien\n");
	printf("===============Menu Bai 2===============\n");
	printf("6.Nhap danh sach lop ngan han tu file txt\n");
	printf("7.Xuat danh sach lop ngan han\n");
	printf("8.Dem lop ngan co si so lop hon 20 va hinh thuc hoc Online\n");
	printf("9.Tim tong thu cao nhat\n");
	printf("10.Xoa Offline\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			Docmatran(a, n);
			break;
		}

	case 2:
		{
			xuatMaTranVuong(a, n);
			break;
		}
	case 3:
		{
			tinhTong_Tamgiacduoi(a, n);
			break;
		}
	case 4:
		{
			KT_PTnamtrendgcheophu(a, n);
			break;
		}
	case 6:
		{
			DocfileStruct(y, dsLNH, b);
			break;
		}
	case 7:
		{
			xuatds_LNH(dsLNH, b);
			break;
		}
	case 8:
		{
			DemOnline(dsLNH, b);
			break;
		}
	case 9:
		{
			TimMax_Tongthu(dsLNH, b);
			break;
		}

	case 10:
		{
			xoa_cacKL_Offline(dsLNH, b);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void Docmatran (int a[][MAXSIZE], int &n)
{
	FILE* f = fopen("datamatran.txt", "rt");
	if (!f)
	{
		printf("Loi doc file");
		return;
	}
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fscanf(f, "%d", &a[i][j]);
		}
	}
	fclose(f);
}
void xuatMaTranVuong (int a[][MAXSIZE], int n)
{
	printf("Xuat ma tran:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}
void tinhTong_Tamgiacduoi (int a[][MAXSIZE], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				tong = tong + a[i][j];
			}
		}
	}
	printf("Tong cac PT nam trong tam giac duoi la: %d\n", tong);
}
void KT_PTnamtrendgcheophu (int a[][MAXSIZE], int n)
{
	bool check = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j == n - 1)
			{
				if (a[i][j] == 0)
				{
					check = true;
				}
				else if (a[i][j] != 0)
				{
					check = false;
					break;
				}
			}
		}
		if (check == false)
		{
			break;
		}
	}
	if (check == true)
	{
		printf("Cac PT nam tren duong cheo phu deu bang 0!\n");
	}
	else
	{
		printf("Cac PT nam tren duong cheo phu khong bang 0!\n");
	}
}
int Demcot_chuanhieusoduong (int a[][MAXSIZE], int n)
{
	int dem = 0;
	int Max = 0;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] >= 0)
			{
				dem++;
			}
		}
		Max = dem;
	}
	return Max;
}
void DocfileStruct (FILE *&y, Lopnganhan dsLNH[], int &b)
{
	y = fopen("datalopnganhan.txt", "rt");
	fscanf(y, "%d", &b);
	for (int i = 0; i < b; i++)
	{
		fscanf(y, "%s ", &dsLNH[i].malop);
		fgets(dsLNH[i].tenlop, 41, y);
		fscanf(y, "%d ", &dsLNH[i].sisolop);
		fscanf(y, "%f ", &dsLNH[i].Hocphi);
		fgets(dsLNH[i].Hinhthuchoc, 30, y);
	}
}
void xuat1_LNH (Lopnganhan LNH)
{
	printf("\t- Ma lop: %s\n", LNH.malop);
	printf("\t- Ten lop: %s", LNH.tenlop);
	printf("\t- Si so: %d\n", LNH.sisolop);
	printf("\t- Hoc phi: %.2f\n", LNH.Hocphi);
	printf("\t- Hinh thuc hoc: %s", LNH.Hinhthuchoc);
	printf("\t\n---------------------------------------------\n");
}
void xuatds_LNH (Lopnganhan dsLNH[], int b)
{
	printf("Danh sach lop ngan han:\n");
	for (int i = 0; i < b; i++)
	{
		xuat1_LNH(dsLNH[i]);
	}
}
void DemOnline (Lopnganhan dsLNH[], int b)
{
	int dem = 0;
	for (int i = 0; i < b; i++)
	{
		if ((strcmp(dsLNH[i].Hinhthuchoc, "Online") == 0) && (dsLNH[i].sisolop > 20))
		{
			dem++;
		}
	}
	printf("Co %d lop ngan han ma si so lon hon 20 va hinh thuc hoc Online!\n", dem);
}
void xoa_vitriofline (Lopnganhan dsLNH[], int &b, int x)
{
	for (int i = x; i < b; i++)
	{
		dsLNH[i] = dsLNH[i + 1];
	}
	b--;
}
void xoa_cacKL_Offline (Lopnganhan dsLNH[], int &b)
{
	for (int i = 0; i < b; i++)
	{
		if (strcmp(dsLNH[i].Hinhthuchoc, "Offline") == 0)
		{
			xoa_vitriofline(dsLNH, b, i);
			i--;
		}
	}
}
void TimMax_Tongthu (Lopnganhan dsLNH[], int n)
{
	int j = 0;
	float Max =  (float)(dsLNH[0].Hocphi * dsLNH[0].sisolop);
	for (int i = 1; i < n; i++)
	{
		if (((float)dsLNH[i].Hocphi * dsLNH[i].sisolop) > Max)
		{
			Max = (float)dsLNH[i].Hocphi * dsLNH[i].sisolop;
			j = i;
		}
	}
	printf("Lop %s co tong thu cao nhat la: %.2f\n", dsLNH[j].malop, Max);
}