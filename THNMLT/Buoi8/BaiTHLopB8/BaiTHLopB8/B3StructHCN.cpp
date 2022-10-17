#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
struct HCN
{
	int Dai;
	int Rong;
};
void NhapHCN (HCN &cHCN);
void xuatHCN (HCN cHCN);
void tinhChuviHCN (HCN cHCN);
void tinhDienTichHCN (HCN cHCN);
int main ()
{
	HCN Hinhchunhat;
	NhapHCN(Hinhchunhat);
	xuatHCN(Hinhchunhat);
	tinhChuviHCN(Hinhchunhat);
	tinhDienTichHCN(Hinhchunhat);
	return 0;
	getch ();
}
void NhapHCN (HCN &cHCN)
{
	printf("Nhap chieu dai HCN: "); scanf_s("%d", &cHCN.Dai);
	printf("Nhap chieu rong HCN: "); scanf_s("%d", &cHCN.Rong);

}
void xuatHCN (HCN cHCN)
{
	printf("Chieu dai HCN la: %d\n", cHCN.Dai);
	printf("Chieu rong HCN la: %d", cHCN.Rong);
}
void tinhChuviHCN (HCN cHCN)
{
	printf("\nChu vi HCN la: %d", (cHCN.Dai + cHCN.Rong) * 2);
}
void tinhDienTichHCN (HCN cHCN)
{
	printf("\nDien tich HCN la: %d\n", cHCN.Dai * cHCN.Rong);
}