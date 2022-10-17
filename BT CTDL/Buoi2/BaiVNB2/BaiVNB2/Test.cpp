//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//#define input "f:/test2.txt"
//#define VOCUC 1000
//typedef struct graph
//{
//	int n;
//	int a[MAX][MAX];
//}DOTHI;
//int DocDoThi (char text[MAX], DOTHI &g)
//{
//	FILE *f;
//	f = fopen("input.txt","rt");
//	if (f == NULL)
//	{
//		printf("\n Khong tim duoc file");
//		return 0;
//	}
//	fscanf(f, "%d", &g.n);
//	for(int i = 0; i < g.n; i++)
//	{
//		for(int j = 0; j < g.n; j++)
//		{
//			fscanf(f, "%d", &g.a[i][j]);
//		}
//	}
//	fclose(f);
//	return 1;
//}
//void XuatDoThi (DOTHI g)
//{
//	printf("\n So dinh cua ma tran la: %d", g.n);
//	printf("\n Ma Tran: \n");
//	for(int i = 0; i < g.n; i++)
//	{
//		printf("\t");
//		for(int j = 0; j < g.n; j++)
//		{
//			printf("%d ", g.a[i][j]);
//			printf("\n");
//		}
//	}
//}
//int LuuVet[MAX];
//int ChuaXet[MAX];
//int DoDaiDuongDiToi[MAX];
//int TimDuongDiNhoNhat (DOTHI g)
//{
//	int li = -1;
//	float p = VOCUC;
//	for (int i = 0; i < g.n; i++)
//	{
//		if (ChuaXet[i] == 0 && DoDaiDuongDiToi[i] < p)
//		{
//			p = (float)DoDaiDuongDiToi[i];
//			li = i;
//		}
//	}
//	return li;
//}
//void CapNhatDuongDi (int u, DOTHI g)
//{
//	ChuaXet[u] = 1;
//	for (int v = 0; v < g.n; v++)
//	{
//		if( ChuaXet[v] == 0 && g.a[u][v] > 0 && g.a[u][v] < VOCUC)
//		{
//			if (DoDaiDuongDiToi[v] > DoDaiDuongDiToi[u] + g.a[u][v])
//			{
//				DoDaiDuongDiToi[v] = DoDaiDuongDiToi[u] + g.a[u][v];
//				LuuVet[v] = u;
//			}
//		}
//	}
//}
//void Dijkstra (int S, int F, DOTHI g)
//{
//	int i;
//	for(i = 0; i < g.n; i++)
//	{
//		ChuaXet[i] = 0;
//		DoDaiDuongDiToi[i] = VOCUC;
//		LuuVet[i] = -1;
//	}
//	DoDaiDuongDiToi[S] = 0;
//	while (ChuaXet[F] == 0)
//	{
//		int u = TimDuongDiNhoNhat(g);
//		if(u == -1) break;
//		CapNhatDuongDi(u, g);
//	}
//	if (ChuaXet[F] == 1)
//	{
//		printf("Duong di ngan nhat tu dinh %d den dinh %d la: \n\t", S, F);
//		i = F;
//		printf("%d ",F);
//		while(LuuVet[i] != S)
//		{
//			printf("<-%d", LuuVet[i]);
//			i = LuuVet[i];
//		}
//		printf("<-%d\n", LuuVet[i]);
//		printf("\tVoi do dai la %d\n", DoDaiDuongDiToi[F]);
//	}
//	else
//	{
//		printf("Khong co duong di tu dinh %d den dinh %d \n", S, F);
//	}
//}
//int main ()
//{
//	DOTHI g;
//	if(DocDoThi(input, g) == 1)
//	{
//		printf("\n Do thi doc thanh cong");
//		XuatDoThi(g);
//		printf("Nhap mot phim bat ki de dung thuat toan dijkstra..\n\n");
//		_getch();
//		int S,F;
//		printf("Nhap vao dinh bat dau: ");
//		scanf_s("%d", &S);
//		printf("Nhap vao dinh ket thuc: ");
//		scanf_s("%d", &F);
//		Dijkstra(S, F, g);
//	}
//	_getch();
//}