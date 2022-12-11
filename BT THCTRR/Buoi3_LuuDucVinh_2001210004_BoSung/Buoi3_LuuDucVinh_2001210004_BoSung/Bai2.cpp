//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//#include "conio.h"
//#include "stdlib.h"
//#define vc 100
//#define vmax 20
//struct DoThi {
//	int flag;
//	int n;
//	int w[vmax][vmax];
//};
//struct Canh {
//	int u, v, w;
//};
//struct DanhSachCanh {
//	Canh data[vmax];
//	int n;
//};
//int chuaXet[vmax];
//void docFile(DoThi& g);
//void xuatDoThi(DoThi g);
//void sapXep(DanhSachCanh& dsc);
//int tim(int belongs[], int dinh);
//void nhap(int belongs[], int dinh);
//void kruskal(DoThi g, DanhSachCanh& dsc, DanhSachCanh& dsck);
//void xuatCayKhung(DanhSachCanh dsck);
//int main() {
//	DoThi g;
//	docFile(g);
//	xuatDoThi(g);
//	DanhSachCanh dsc;
//	DanhSachCanh dsck;
//	kruskal(g, dsc, dsck);
//	xuatCayKhung(dsck);
//	getch();
//	return 0;
//}
//void docFile(DoThi& g) {
//	FILE* f = fopen("dothivohuong2.txt", "rt");
//	if (f == NULL) {
//		printf("\nKhong tim thay file");
//	}
//	else {
//		fscanf(f, "%d", &g.flag);
//		fscanf(f, "%d", &g.n);
//		for (int i = 0; i < g.n; i++) {
//			for (int j = 0; j < g.n; j++) {
//				fscanf(f, "%d", &g.w[i][j]);
//			}
//		}
//	}
//}
//void xuatDoThi(DoThi g) {
//	if (g.flag == 0) {
//		printf("\nDo thi vo huong:");
//	}
//	else {
//		printf("\nDo thi co huong:");
//	}
//	printf("\nMa tran ke hoac ma tran trong so cua do thi: ");
//	for (int i = 0; i < g.n; i++) {
//		printf("\n");
//		for (int j = 0; j < g.n; j++) {
//			printf("%5d", g.w[i][j]);
//		}
//	}
//}
//void sapXep(DanhSachCanh& dsc) {
//	Canh temp;
//	for (int i = 0; i < dsc.n - 1; i++) {
//		for (int j = i + 1; j < dsc.n; j++) {
//			if (dsc.data[i].w > dsc.data[j].w) {
//				temp = dsc.data[i];
//				dsc.data[i] = dsc.data[j];
//				dsc.data[j] = temp;
//			}
//		}
//	}
//}
//int tim(int belongs[], int dinh) {
//	return belongs[dinh];
//}
//void nhap(DoThi g, int belongs[], int c1, int c2) {
//	for (int i = 0; i < g.n; i++) {
//		if (belongs[i] == c2) {
//			belongs[i] = c1;
//		}
//	}
//}
//void kruskal(DoThi g, DanhSachCanh& dsc, DanhSachCanh& dsck) {
//	int belongs[vmax], i, j, cno1, cno2;
//	dsc.n = 0;
//	for (i = 1; i < g.n; i++) {
//		for (j = 0; j < i; j++) {
//			if (g.w[i][j] != 0 && g.w[i][j] != vc) {
//				dsc.data[dsc.n].u = j;
//				dsc.data[dsc.n].v = i;
//				dsc.data[dsc.n].w = g.w[i][j];
//				dsc.n++;
//			}
//		}
//	}
//	sapXep(dsc);
//	for (int i = 0; i < g.n; i++) {
//		belongs[i] = i;
//	}
//	dsck.n = 0;
//	for (int i = 0; i < dsc.n; i++) {
//		cno1 = tim(belongs, dsc.data[i].u);
//		cno2 = tim(belongs, dsc.data[i].v);
//		if (cno1 != cno2) {
//			dsck.data[dsck.n] = dsc.data[i];
//			dsck.n++;
//			nhap(g, belongs, cno1, cno2);
//		}
//	}
//}
//void xuatCayKhung(DanhSachCanh dsck) {
//	int i, chiPhi = 0;
//	for (i = 0; i < dsck.n; i++) {
//		printf("\n%d - %d: %d", dsck.data[i].u + 1, dsck.data[i].v + 1, dsck.data[i].w);
//		chiPhi += dsck.data[i].w;
//	}
//	printf("\nChi phi cua cay khung la: %d", chiPhi);
//}