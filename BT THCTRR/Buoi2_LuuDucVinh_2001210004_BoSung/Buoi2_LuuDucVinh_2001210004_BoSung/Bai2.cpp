#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define vmax 20
struct DoThi {
	int n;
	int w[vmax][vmax];
};
struct Canh {
	int u, v;
};
int chuaxet[100];
void docFile(DoThi& g, char* fileName);
void xuatDoThi(DoThi g);
void xuatCayKhung(Canh T[], int soCanh);
void xayDungCayKhungBFS(DoThi g, Canh T[], int& soCanh);
int ghiFile(Canh T[], int soCanh, char* fileName);
int main() {
	char fileName[50] = "dothi2In.txt";
	DoThi g;
	docFile(g, fileName);
	Canh T[50];
	int soCanh = 0;
	for (int i = 1; i <= g.n; i++) {
		chuaxet[i] = 0;
	}
	printf("Do thi vo huong:\n");
	xuatDoThi(g);
	xayDungCayKhungBFS(g, T, soCanh);
	char fileName2[50] = "dothi2Out.txt";
	int result = ghiFile(T, soCanh, fileName2);
	if (result == 1) {
		printf("\n\tGhi file thanh cong!");
	}
	else {
		printf("\n\tGhi file khong thanh cong!");
	}
	getch();
	return 0;
}
void docFile(DoThi& g, char* fileName) {
	FILE* f = fopen(fileName, "rt");
	if (f == NULL) {
		printf("\nLoi doc file");
		return;
	}
	fscanf(f, "%d", &g.n);
	for (int i = 1; i <= g.n; i++) {
		for (int j = 1; j <= g.n; j++) {
			fscanf(f, "%d", &g.w[i][j]);
		}
	}
}
void xuatDoThi(DoThi g) {
	for (int i = 1; i <= g.n; i++) {
		for (int j = 1; j <= g.n; j++) {
			printf("\t%d", g.w[i][j]);
		}
		printf("\n");
	}
}
void xuatCayKhung(Canh T[], int soCanh) {
	printf("\nCay khung la: \n");
	for (int i = 1; i <= soCanh; i++) {
		printf("\t(%d, %d)", T[i].u, T[i].v);
	}
}
void xayDungCayKhungBFS(DoThi g, Canh T[], int& soCanh) {
	for (int u = 1; u <= g.n; u++) {
		for (int v = 1; v <= g.n; v++) {
			if (g.w[u][v] != 0 && chuaxet[v] == 0) {
				soCanh++;
				T[soCanh].u = u;
				T[soCanh].v = v;
				chuaxet[u] = 1;
				chuaxet[v] = 1;
				if (soCanh == g.n - 1) {
					xuatCayKhung(T, soCanh);
					return;
				}
			}
		}
	}
}
int ghiFile(Canh T[], int soCanh, char* fileName) {
	FILE* f = fopen(fileName, "wt");
	fprintf(f, "%d\n", soCanh);
	for (int i = 1; i <= soCanh; i++) {
		fprintf(f, "%d %d\n", T[i].u, T[i].v);
	}
	return 1;
}