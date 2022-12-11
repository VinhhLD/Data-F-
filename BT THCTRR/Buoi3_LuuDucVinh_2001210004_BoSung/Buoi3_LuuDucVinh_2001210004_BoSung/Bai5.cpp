//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//#include "conio.h"
//#include "stdlib.h"
//#define vmax 20
//struct Canh {
//	int u, v, w;
//};
//struct DanhSachCanh {
//	Canh data[vmax];
//	int n;
//};
//int n;
//void docFile(DanhSachCanh& dsc);
//void xuatDanhSachCanh(DanhSachCanh dsc);
//void sapXep(DanhSachCanh& dsc);
//int tim(int belongs[], int dinh);
//void nhap(int belongs[], int dinh);
//void kruskal(DanhSachCanh& dsc, DanhSachCanh& dsck);
//void xuatCayKhung(DanhSachCanh dsck);
//int main() {
//	DanhSachCanh dsc;
//	DanhSachCanh dsck;
//	docFile(dsc);
//	printf("So thanh pho la: %d", n);
//	xuatDanhSachCanh(dsc);
//	kruskal(dsc, dsck);
//	printf("\nTuyen duong hoan thanh som nhat: ");
//	xuatCayKhung(dsck);
//	getch();
//	return 0;
//}
//void docFile(DanhSachCanh& dsc) {
//	FILE* f = fopen("dsc_bai5.txt", "rt");
//	if (f == NULL) {
//		printf("\nKhong tim thay file");
//	}
//	else {
//		fscanf(f, "%d%d", &n, &dsc.n);
//		for (int i = 0; i < dsc.n; i++) {
//			fscanf(f, "%d%d%d", &dsc.data[i].u, &dsc.data[i].v, &dsc.data[i].w);
//		}
//	}
//}
//void xuatDanhSachCanh(DanhSachCanh dsc) {
//	printf("\nDanh sach tuyen duong: ");
//	for (int i = 0; i < dsc.n; i++) {
//		printf("\n\t%d - %d: %d", dsc.data[i].u, dsc.data[i].v, dsc.data[i].w);
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
//void nhap(int belongs[], int c1, int c2) {
//	for (int i = 0; i < n; i++) {
//		if (belongs[i] == c2) {
//			belongs[i] = c1;
//		}
//	}
//}
//void kruskal(DanhSachCanh& dsc, DanhSachCanh& dsck) {
//	int belongs[vmax], i, cno1, cno2;
//	sapXep(dsc);
//	for (i = 0; i < n; i++) {
//		belongs[i] = i;
//	}
//	dsck.n = 0;
//	for (i = 0; i < dsc.n; i++) {
//		cno1 = tim(belongs, dsc.data[i].u);
//		cno2 = tim(belongs, dsc.data[i].v);
//		if (cno1 != cno2) {
//			dsck.data[dsck.n] = dsc.data[i];
//			dsck.n++;
//			nhap(belongs, cno1, cno2);
//		}
//		if (dsck.n == n - 1) {
//			break;
//		}
//	}
//}
//void xuatCayKhung(DanhSachCanh dsck) {
//	int i, chiPhi = 0;
//	for (i = 0; i < dsck.n; i++) {
//		printf("\n\t%d - %d: %d", dsck.data[i].u, dsck.data[i].v, dsck.data[i].w);
//		chiPhi += dsck.data[i].w;
//	}
//	printf("\nThoi gian hoan thanh tuyen duong som nhat la: %d", chiPhi);
//}