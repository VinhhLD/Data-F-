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
//	FILE *f=fopen("DoThiVoHuong.txt","rt");
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
//void xayDungCayKhung_DFS(DoThi g,Canh c[],int &soCanh,int u)
//{
//	chuaXet[u]=1;
//	for(int v=1;v<=g.n;v++)
//	{
//		if(g.w[u][v]!=0 && chuaXet[v]==0)
//		{
//			soCanh++;
//			c[soCanh].u=u;
//			c[soCanh].v=v;
//			if(soCanh==g.n-1)
//			{
//				xuatCayKhung(c,soCanh);
//				return;
//			}
//			else
//				xayDungCayKhung_DFS(g,c,soCanh,v);
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
//	for(int i=1;i<=g.n;i++)
//		chuaXet[i]=0;
//	xayDungCayKhung_DFS(g,c,soCanh,1);
//	getch();
//}