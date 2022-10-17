/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int nhuan (int nam)
{
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
void songaytrongthang (int ngay, int thang, int nam)
{
	switch(thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	  if( ngay > 0 && ngay <= 31)
	  {
		  printf("Ngay %d thang %d nam %d hop le\n", ngay, thang, nam);
		  break;
      }
	  else
	  {
		  printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam);
		  break;
	  }
	case 2:
			if (nhuan(nam) == 1)
			{
				if (ngay <= 29 && ngay > 0)
				{
					printf("Ngay %d thang %d nam %d hop le\n", ngay, thang, nam);
					break;
				}
				else
				{
					printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam);
					break;
				}
			}
			else
			{
				if (ngay <= 28 && ngay > 0)
				{
					printf("Ngay %d thang %d nam %d hop le\n", ngay, thang, nam);
					break;
				}
				else
				{
					printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam);
					break;
				}
			}
	case 4: case 6: case 9: case 11:
		if(ngay <= 30 && ngay > 0)
		{
			printf("Ngay %d thang %d nam %d hop le\n", ngay, thang, nam);
            break;
		}
		else
		{
			printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam);
			break;
		}
	default: 
		printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam);
		break;
	}
}
int kiemtrasongaytrongthang (int ngay, int thang, int nam)
{
	switch (thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			{
				return 31;
				break;
			}
		case 2:
			{
				if (nhuan(nam))
				{
					return 29;
				}
				return 28;
			}
		case 4: case 6: case 9: case 11:
			{
				return 30;
				break;
			}
	}
	return 1;
}

void tieptheo (int ngay, int thang, int nam)
{
	int ngaytieptheo = ngay;
	int thangtieptheo = thang;
	int namtieptheo = nam;
	if (ngay > 0 && ngay <= kiemtrasongaytrongthang(ngay, thang, nam) && thang > 0 && thang < 13 && nam > 0)
	{
		if (thang != 12 && ngay == kiemtrasongaytrongthang(ngay, thang, nam))
		{
			ngaytieptheo = 1;
			thangtieptheo = thang + 1;
			printf("Ngay tiep theo: %d/%d/%d\n", ngaytieptheo, thangtieptheo, namtieptheo);
		}
		else if (thang = 12 && ngay == kiemtrasongaytrongthang(ngay, thang, nam))
		{
			ngaytieptheo = 1;
			thangtieptheo = 1;
			namtieptheo = nam + 1;
			printf("Ngay tiep theo: %d/%d/%d\n", ngaytieptheo, thangtieptheo, namtieptheo);
		}
		else if (thang == 2)
		{
			if (nhuan(nam) == 1)
			{
				if (ngay == 29)
				{
					ngaytieptheo = 1;
					thangtieptheo = thang + 1;
					printf("Ngay tiep theo: %d/%d/%d\n", ngaytieptheo, thangtieptheo, namtieptheo);
				}
			}
			else if (nhuan(nam) == 0)
			{
				if (ngay == 28)
				{
					ngaytieptheo = 1;
					thangtieptheo = thang + 1;
					printf("Ngay tiep theo: %d/%d/%d\n", ngaytieptheo, thangtieptheo, namtieptheo);
				}
			}
		}
		else
		{
			ngaytieptheo = ngay + 1;
			printf("Ngay tiep theo: %d/%d/%d\n", ngaytieptheo, thangtieptheo, namtieptheo);
		}
	}
}
void truocdo (int ngay, int thang, int nam)
{
	int ngaytruocdo = ngay;
	int thangtruocdo = thang;
	int namtruocdo = nam;
	if (thang == 1 && ngay == 1)
	{
		ngaytruocdo = 31;
		thangtruocdo = 12;
		namtruocdo = nam - 1;
		printf("Ngay truoc do: %d/%d/%d\n", ngaytruocdo, thangtruocdo, namtruocdo);
	}
	else
	if (ngay > 0 && ngay <= kiemtrasongaytrongthang(ngay, thang, nam) && thang > 0 && thang < 13 && nam > 0)
	{
		if (thang != 1 && ngay == 1)
		{
			if (thang == 2 || thang == 4 || thang == 6 || thang == 8 || thang == 9 || thang == 11)
			{
				ngaytruocdo = 31;
				thangtruocdo = thang - 1;
				printf("Ngay truoc do: %d/%d/%d\n", ngaytruocdo, thangtruocdo, namtruocdo);
			}
		else if (thang == 5 || thang == 7 || thang == 10 || thang == 12)
		{
			ngaytruocdo = 30;
			thangtruocdo = thang - 1;
			printf("Ngay truoc do: %d/%d/%d\n", ngaytruocdo, thangtruocdo, namtruocdo);
		}
		else if (thang == 3)
			{
			if (nhuan(nam) == 1)
				{
					ngaytruocdo = 29;
					thangtruocdo = thang - 1;
					printf("Ngay truoc do: %d/%d/%d\n", ngaytruocdo, thangtruocdo, namtruocdo);
				}
			else
				{
					ngaytruocdo = 28;
					thangtruocdo= thang - 1;
					printf("Ngay truoc do: %d/%d/%d\n", ngaytruocdo, thangtruocdo, namtruocdo);
				}
			}
		}
	else
		{
			ngaytruocdo = ngay - 1;
			printf("Ngay truoc do: %d/%d/%d\n", ngaytruocdo, thangtruocdo, namtruocdo);
		}
	}
}
int main ()
{
	int ngay, thang, nam;
	do
	{
	printf("\nNhap ngay: "); scanf_s("%d", &ngay);
	printf("Nhap thang: "); scanf_s("%d", &thang);
	printf("Nhap nam: "); scanf_s("%d", &nam);
	if (nhuan(nam) == 1)
	{
		printf("Nam %d la nam nhuan\n", nam);
	}
	else
	{
		printf("Nam %d la nam khong nhuan\n", nam);
	}
	songaytrongthang(ngay, thang, nam);
	tieptheo(ngay, thang, nam);
	truocdo(ngay, thang, nam);
	}
	while (ngay != 0 && thang != 0 && nam != 0);
	return 0;
	getch ();	
}*/