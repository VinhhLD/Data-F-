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
//struct Nhan {
//	int dinh;
//	int chiPhi;
//};
//int chuaXet[vmax];
//void docFile(DoThi& g);
//void xuatDoThi(DoThi g);
//void xuatBangChiPhi(DoThi g, Nhan bangChiPhi[vmax][vmax]);
//void xuatCayKhung(DoThi g, Nhan bangChiPhi[vmax][vmax]);
//void prim(DoThi g, Nhan bangChiPhi[vmax][vmax], int dinhKhoiDau);
//int main() {
//	DoThi g;
//	docFile(g);
//	xuatDoThi(g);
//	Nhan bangChiPhi[vmax][vmax];
//	prim(g, bangChiPhi, 1);
//	xuatBangChiPhi(g, bangChiPhi);
//	xuatCayKhung(g, bangChiPhi);
//	getch();
//	return 0;
//}
//void docFile(DoThi& g) {
//	FILE* f = fopen("dothicohuong3.txt", "rt");
//	if (f == NULL) {
//		printf("\nKhong tim thay file");
//	}
//	else {
//		fscanf(f, "%d", &g.flag);
//		fscanf(f, "%d", &g.n);
//		for (int i = 1; i <= g.n; i++) {
//			for (int j = 1; j <= g.n; j++) {
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
//	for (int i = 1; i <= g.n; i++) {
//		printf("\n");
//		for (int j = 1; j <= g.n; j++) {
//			printf("%5d", g.w[i][j]);
//		}
//	}
//}
//void xuatBangChiPhi(DoThi g, Nhan bangChiPhi[vmax][vmax]) {
//	printf("\nBang mo ta thuat toan Prim tim cay khung nho nhat: \n");
//	for (int i = 1; i <= g.n; i++) {
//		printf("\t  %d", i);
//	}
//	for (int i = 0; i <= g.n; i++) {
//		printf("\n-------------------------------------------------\n");
//		for (int j = 1; j <= g.n; j++) {
//			printf("\t(%d,%d)", bangChiPhi[i][j].dinh, bangChiPhi[i][j].chiPhi);
//		}
//	}
//}
//void xuatCayKhung(DoThi g, Nhan bangChiPhi[vmax][vmax]) {
//	printf("\nDanh sach cac canh thuoc cay khung nho nhat.\n");
//	int i = 2;
//	while (i <= g.n) {
//		printf("\t(%d,%d)", bangChiPhi[g.n][i].dinh, i);
//		i++;
//	}
//}
//void prim(DoThi g, Nhan bangChiPhi[vmax][vmax], int dinhKhoiDau) {
//	for (int i = 1; i <= g.n; i++) {
//		chuaXet[i] = 0;
//		bangChiPhi[0][i].chiPhi = vc;
//		bangChiPhi[0][i].dinh = 0;
//	}
//	bangChiPhi[0][dinhKhoiDau].chiPhi = 1;
//	bangChiPhi[0][dinhKhoiDau].dinh = 1;
//	int i = 0;
//	while (i < g.n) {
//		int chonDinhMin = 1;
//		while (chuaXet[chonDinhMin] == 1) {
//			chonDinhMin++;
//		}
//		for (int j = 1; j < g.n; j++) {
//			if (chuaXet[j] == 0 && bangChiPhi[i][j].chiPhi < bangChiPhi[i][chonDinhMin].chiPhi) {
//				chonDinhMin = j;
//			}
//		}
//		chuaXet[chonDinhMin] = 1;
//		i++;
//		for (int j = 1; j <= g.n; j++) {
//			if (chuaXet[j] == 1 || g.w[chonDinhMin][j] == vc) {
//				bangChiPhi[i][j] = bangChiPhi[i - 1][j];
//			}
//			if (chonDinhMin != j && chuaXet[j] == 0 && g.w[chonDinhMin][j] < vc) {
//				if (bangChiPhi[i - 1][j].chiPhi > g.w[chonDinhMin][j]) {
//					bangChiPhi[i][j].chiPhi = g.w[chonDinhMin][j];
//					bangChiPhi[i][j].dinh = chonDinhMin;
//				}
//				else {
//					bangChiPhi[i][j] = bangChiPhi[i - 1][j];
//				}
//			}
//		}
//	}
//}