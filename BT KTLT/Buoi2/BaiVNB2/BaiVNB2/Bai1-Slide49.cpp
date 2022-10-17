//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//double tinhKQ (int a, int b, int c);
//int main ()
//{
//	int a, b, c;
//	printf("Nhap 3 so nguyen a, b, c: ");
//	scanf_s("%d%d%d", &a, &b, &c);
//	try
//	{
//		printf("Ket qua c / (a - b) la: %.2f\n", tinhKQ(a, b, c));
//	}
//	catch (const char* Thongbao)
//	{
//		printf("Ket qua: %s\n", Thongbao);
//	}
//	catch (int Num0)
//	{
//		printf("Ket qua c / (a - b) la: %d\n", Num0);
//	}
//	return 0;
//	getch ();
//}
//double tinhKQ (int a, int b, int c)
//{
//	if ((a - b) == 0)
//	{
//		if (c != 0)
//		{
//			throw "Loi phep chia cho 0";
//		}
//		else if (c == 0)
//		{
//			throw 0;	
//		}
//	}
//	return (float)c / (a - b);
//}