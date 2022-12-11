//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#define vmax 20
//
//struct DoThi
//{
//	int flag;
//	int n;
//	int w[vmax][vmax];
//};
//void docFile(DoThi &g)
//{
//	FILE *f=fopen("BRIDGE_INP.txt","rt");
//	if(f==NULL)
//		printf("\nKhong tim duoc file");
//	else
//	{
//		fscanf(f,"%d",&g.flag);
//		fscanf(f,"%d",&g.n);
//		for(int i=1;i<=g.n;i++)
//		{
//			for(int j=1;j<=g.n;j++)
//				fscanf(f,"%d",&g.w[i][j]);
//		}
//	}
//}
//void xuatDoThi(DoThi g)
//{
//	if(g.flag==0)
//		printf("\nDo thi vo huong");
//	else
//		printf("\nDo thi co huong");
//	printf("\nMa tran ke hoac ma tran trong so cua do thi:");
//	for(int i=1;i<=g.n;i++)
//	{
//		printf("\n");
//		for(int j=1;j<=g.n;j++)
//			printf("%5d",g.w[i][j]);
//	}
//}
//
//struct Canh
//{
//	int u,v;
//};
//
//int chuaXet[100];
//void xuatCayKhung(Canh c[], int soCanh)
//{
//	printf("\nCay khung nho nhat \n");
//	for(int i=1;i<=soCanh;i++)
//		printf("\t(%d %d)",c[i].u,c[i].v);
//}
//int demCayKhung(DoThi g,Canh c[], int& soCanh)
//{
//	int dem=0;
//	for(int u=1;u<=g.n;u++)
//	{
//		for(int v=1;v<=g.n;v++)
//		{
//			if(g.w[u][v]!=0 && chuaXet[v]==0)
//			{
//				soCanh++;
//				c[soCanh].u=u;
//				c[soCanh].v=v;
//				chuaXet[v]=1;
//				chuaXet[u]=1;
//				dem++;
//			}
//		}
//	}
//	return dem;
//}
//void GhiFileXayDungCayKhung_BFS(DoThi g,Canh c[], int& soCanh)
//{
//	FILE *f=fopen("BRIDGE_OUT.txt","wt");
//	if(f==NULL)
//		printf("\nKhong tim duoc file");
//	else
//	{
//		int dem=0;
//		fprintf(f,"%d",g.n-1);
//		for(int u=1;u<=g.n;u++)
//		{
//			for(int v=1;v<=g.n;v++)
//			{
//				if(g.w[u][v]!=0 && chuaXet[v]==0)
//				{
//					soCanh++;
//					c[soCanh].u=u;
//					c[soCanh].v=v;
//					chuaXet[v]=1;
//					chuaXet[u]=1;
//					fprintf(f,"\n%d	%d",c[soCanh].u,c[soCanh].v);
//					if(soCanh==g.n-1)
//					{
//						xuatCayKhung(c,soCanh);
//						return;
//					}
//				}
//			}
//		}
//	}
//}
//void main()
//{
//	DoThi g;
//	docFile(g);
//	xuatDoThi(g);
//	Canh c[100];
//	int soCanh=0;
//	GhiFileXayDungCayKhung_BFS(g,c,soCanh);
//	getch();
//}