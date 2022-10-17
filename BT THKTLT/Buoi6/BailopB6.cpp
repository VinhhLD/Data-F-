#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
int KiemTraKyTuSo (char *s);
void DoiKiTuDauThanhHoa_VaSauThanhThuong (char s[]);
void xoaKT (char s[]);
void xoa (char s[], int vt);
int main ()
{
	char s[MAX];
	printf("Nhap chuoi: "); gets(s);
	if (KiemTraKyTuSo(s) == 1)
	{
		printf("Chuoi %s chua toan ky so\n", s);
	}
	else
	{
		printf("Chuoi %s khong hoan toan chua ky so\n", s);
	}
	printf("Chuoi %s sau khi doi la:\n", s);
	DoiKiTuDauThanhHoa_VaSauThanhThuong(s);
	puts(s);
	xoaKT(s);
	printf("Chuoi sau khi xoa khoang trang thua:\n");
	puts(s);
	return 0;
	getch ();
}
int KiemTraKyTuSo (char *s)
{
	for (int i  = 0; i < strlen(s); i++)
	{
		if (s[i] <= '0' || s[i] >= '9')
		{
			return 0;
		}
	}
	return 1;
}
void DoiKiTuDauThanhHoa_VaSauThanhThuong (char s[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (i == 0 || (i > 0 && s[i - 1] == ' '))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += 32;
			}
		}
	}
}
void xoa (char s[], int vt)
{
	int n = strlen(s);
	for (int i = vt; i < n; i++)
	{
		s[i] = s[i + 1];
	}
	s[n - 1] = '\0';
}
void xoaKT (char s[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			xoa(s, i);
			i--;
		}
		if (s[0] == ' ')
		{
			xoa(s, 0);
		}
	}
}