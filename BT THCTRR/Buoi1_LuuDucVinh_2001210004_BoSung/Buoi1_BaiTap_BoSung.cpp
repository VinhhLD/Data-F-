#include"Buoi1_BaiTap_BoSung.h"
void xuatBacCuaCacDinh(Graph G)
{
	if (G.flag == 0)
	{
		int a[100], tongbac = 0;
		for (int i = 0; i < G.n; i++)
		{// i la dinh 
			for (int j = 0; j < G.n; j++)
			{
				tongbac+= G.m[i][j];
			}
			a[i] = tongbac;
			tongbac = 0;
		}
		// xuat cac bac cua dinh 
		for (int i = 0; i < G.n; i++)
		{
			printf("bac cua dinh %d la :%d\n", i, a[i]);
		}
	}
	else
	{
		int br[100],tongbr = 0;
		for (int i = 0; i < G.n; i++)
		{// i la dinh 
			for (int j = 0; j < G.n; j++)
			{
				tongbr += G.m[i][j];
			}
			br[i] = tongbr;
			tongbr = 0;
		}
		// bac vao 
		int bv[100], tongbv = 0;
		for (int i = 0; i < G.n; i++)
		{// i la dinh 
			for (int j = 0; j < G.n; j++)
			{
				tongbv += G.m[j][i];
			}
			bv[i] = tongbv;
			tongbv = 0;
		}

		// xuat cac bac cua dinh 
		for (int i = 0; i < G.n; i++)
		{
			printf("Bac vao cua dinh %d la :%d\n", i, bv[i]);
			printf("Bac ra cua dinh %d la :%d\n", i, br[i]);
		}
	}
}
int tinhTongSoCanh(Graph G)
{
	int tong = 0;
	for (int i = 0; i < G.n; i++)
	{
		for (int j = 0; j < G.n; j++)
		{
			if (G.m[i][j] > 0)
				tong++;
		}
	}
	return tong / 2;
}
Graph Doc_danh_sach_ke(Graph &g)
{
	// Đọc file
	ifstream fileIn;
	fileIn.open("danhsachke.txt", ios::in);
	if (fileIn.fail())
	{
		cout << "\nFile khong ton tai !!!";
		g.flag = -1;
		return g;
	}
	// Đọc số đỉnh
	fileIn >> g.flag;
	fileIn >> g.n;
	khoiTao(g);
	//g.flag = flag;
	// Đọc các thành phần của danh sách kề
	string line;
	while (getline(fileIn, line))
	{
		stringstream stream(line);
		int dinh_dau;
		stream >> dinh_dau;
		while (1)
		{
			int dinh_cuoi;
			stream >> dinh_cuoi;
			if (!stream) break;
			g.m[dinh_dau][dinh_cuoi] = 1;
			if (g.flag == 0)
				g.m[dinh_cuoi][dinh_dau] = 1;
		}
	}
	fileIn.close();
 return g;
}
void docFileMTK(FILE *&f, Graph &G)
{
	f = fopen("matranke.txt", "rt");
	fscanf(f, "%d", &G.flag);
	fscanf(f, "%d", &G.n);
	for(int i = 0; i < G.n; i++)
	{
		for(int j = 0; j < G.n; j++)
		{
			fscanf(f, "%d", &G.m[i][j]);
		}
	}
	fclose(f);
}
void xuatMTK(Graph G)
{
	printf("Do thi: %d\n", G.flag);
	printf("So dinh: %d\n", G.n);
	for(int i = 0; i < G.n; i++)
	{
		for(int j = 0; j < G.n; j++)
		{
			printf("%5d", G.m[i][j]);
		}
		printf("\n");
	}
}
void docFileDSC(Graph &G, FILE *&c, int &so_canh)
{
	c = fopen("danhsachcanh.txt", "rt");
	fscanf(c, "%d", &G.flag);
	fscanf(c, "%d", &G.n);
	khoiTao(G);
	fscanf(c, "%d", &so_canh);
	for(int i = 0; i < so_canh; i++)
	{
		int dinhDau,dinhCuoi;
		fscanf(c, "%d", &dinhDau);
		fscanf(c, "%d", &dinhCuoi);
		//CHUYEN SANG MA TRAN KE 
		G.m[dinhDau][dinhCuoi]=1;
		if(G.flag == 0)
			G.m[dinhCuoi][dinhDau] = 1;
	}
	fclose(c);
}
void khoiTao(Graph &G)
{
	for(int i = 0; i < G.n; i++)
		for(int j = 0; j < G.n; j++)
		{
			G.m[i][j] = 0;
		}
}
void xuatDSC(Graph G, int so_canh)
{
	printf("Do thi: %d\n", G.flag);
	printf("So dinh: %d\n", G.n);
	printf("So canh: %d\n", so_canh);
	for(int i = 0; i < G.n; i++)
	{
		for(int j = 0; j < G.n; j++)
		{
			printf("%5d", G.m[i][j]);
		}
		printf("\n");
	}
}
void showMenu()
{
	printf("1.Doc xuat ma tran ke \n");
	printf("2.Doc xuat danh sach canh \n");
	printf("3.Doc xuat danh sach ke \n");
	printf("4.Tinh bac cua ma tran ke \n");
	printf("5.Tong cac canh trong do thi \n");
}
void process()
{
	int chon;
	FILE *f;
	int so_canh=0;
	FILE *c;
	Graph K, C, D;
	do
	{
		showMenu();
		printf("Chon chuc nang: "); scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			docFileMTK(f, K);
			xuatMTK(K);
			break;
		case 2:
			docFileDSC(C, c, so_canh);
			xuatDSC(C, so_canh);
			break;
		case 3:
			Doc_danh_sach_ke(D);
			xuatMTK(D);
			break;
		case 4:
			xuatBacCuaCacDinh(K);
			break;
		case 5:
			printf("Tong so canh cua ma tran la: %d\n", tinhTongSoCanh(K));
			break;
		default:
			break;
		}
	} while (chon != 0);
}