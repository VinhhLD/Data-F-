#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define vmax 20

struct DoThi
{
	int flag;
	int n;
	int w[vmax][vmax];
};
void docFile(DoThi &g)
{
	FILE *f=fopen("HamInp2.txt","rt");
	if(f==NULL)
		printf("\nKhong tim duoc file");
	else
	{
		fscanf(f,"%d",&g.flag);
		fscanf(f,"%d",&g.n);
		for(int i=0;i<g.n;i++)
		{
			for(int j=0;j<g.n;j++)
				fscanf(f,"%d",&g.w[i][j]);
		}
	}
}
void xuatDoThi(DoThi g)
{
	if(g.flag==0)
		printf("\nDo thi vo huong");
	else
		printf("\nDo thi co huong");
	printf("\nMa tran ke hoac ma tran trong so cua do thi:");
	for(int i=0;i<g.n;i++)
	{
		printf("\n");
		for(int j=0;j<g.n;j++)
			printf("%5d",g.w[i][j]);
	}
}
void TPLien_Thong(DoThi g)
{
	FILE* f=fopen("HamOut1.txt","wt");
	char*DanhDau = new char [g.n];
	char ThanhCong; 
	int Dem=0, i,j, MLT=0;
	for( i = 0; i<g.n; i++)     
	DanhDau[i] = 0;
	do
	{
		j = 0;
		while(DanhDau[j]==1) 
			j++;
		DanhDau[j] = 1;   
		Dem++;     
		MLT++;      
		do {
			ThanhCong =0;
			for(i = 0; i<g.n; i++)
				if(DanhDau[i]==1)
					for(j = 0; j<g.n; j++)
						if (DanhDau[j] == 0 && g.w[i][j] > 0) 
						{
							DanhDau[j] = 1;
							ThanhCong =1;
							Dem++;
							if(Dem == g.n-1)
								fprintf(f,"%5d",MLT-1);
						}
			}while (ThanhCong == 1);
	} while(Dem<g.n-1);     
}
void main()
{
	DoThi g;
	docFile(g);
	xuatDoThi(g);
	TPLien_Thong(g);
	getch();
}