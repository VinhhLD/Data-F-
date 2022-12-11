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
//void initMatrix(DoThi& g);
//int docFile(DoThi& g);
//void xuatDoThi(DoThi g);
//int xuatCayKhung(DoThi g, Nhan bangChiPhi[vmax][vmax]);
//void prim(DoThi g, Nhan bangChiPhi[vmax][vmax], int dinhKhoiDau);
//int main() {
//	DoThi g;
//	int dinhXuatPhat = docFile(g);
//	printf("Diem xuat phat cua may don tuyet: %d", dinhXuatPhat);
//	xuatDoThi(g);
//	Nhan bangChiPhi[vmax][vmax];
//	prim(g, bangChiPhi, dinhXuatPhat);
//	int result = xuatCayKhung(g, bangChiPhi);
//	if (result == 1) {
//		printf("\n\tGhi file thanh cong!");
//	}
//	else {
//		printf("\n\tGhi file khong thanh cong!");
//	}
//	getch();
//	return 0;
//}
//void initMatrix(DoThi& g) {
//	for (int i = 1; i <= g.n; i++) {
//		for (int j = 1; j <= g.n; j++) {
//			g.w[i][j] = vc;
//			if (i == j) {
//				g.w[i][j] = 0;
//			}
//		}
//	}
//}
//int docFile(DoThi& g) {
//	FILE* f = fopen("ONEINP.txt", "rt");
//	if (f == NULL) {
//		printf("\nKhong tim thay file");
//	}
//	else {
//		int dinhXuatPhat;
//		fscanf(f, "%d", &g.n);
//		fscanf(f, "%d", &dinhXuatPhat);
//		initMatrix(g);
//		int dinhDau, dinhCuoi, met;
//		for (int i = 0; i <= g.n * 2; i++) {
//			fscanf(f, "%d%d%d", &dinhDau, &dinhCuoi, &met);
//			g.w[dinhDau][dinhCuoi] = met;
//			g.w[dinhCuoi][dinhDau] = met;
//		}
//		return dinhXuatPhat;
//	}
//	fclose(f);
//}
//void xuatDoThi(DoThi g) {
//	printf("\nMa tran ke hoac ma tran trong so cua do thi: ");
//	for (int i = 1; i <= g.n; i++) {
//		printf("\n");
//		for (int j = 1; j <= g.n; j++) {
//			printf("%5d", g.w[i][j]);
//		}
//	}
//}
//int xuatCayKhung(DoThi g, Nhan bangChiPhi[vmax][vmax]) {
//	printf("\nDanh sach cac duong se don: \n");
//	int i = 2;
//	int chiPhi = 0;
//	while (i <= g.n) {
//		printf("\t(%d,%d)", bangChiPhi[g.n][i].dinh, i);
//		chiPhi += bangChiPhi[g.n][i].chiPhi;
//		i++;
//	}
//	printf("\nTong nhien lieu ma may se su dung la: %d", chiPhi);
//	FILE* f = fopen("ONEOUT.txt", "wt");
//	if (f == NULL) {
//		return 0;
//	}
//	fprintf(f, "%d", chiPhi);
//	fclose(f);
//	return 1;
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
//		for (int j = 1; j <= g.n; j++) {
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