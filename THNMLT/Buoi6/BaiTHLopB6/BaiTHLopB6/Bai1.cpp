#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void Correct(char str[]);
int WordCount (char str[]);
void moiTu1dong (char str[]);
int main ()
{
	char s[MAX];
	printf("Nhap chuoi: ");
	flushall();
	gets(s);
	puts(s);
	Correct(s);
	printf("So tu trong chuoi: %d\n", WordCount(s));
	moiTu1dong(s);
	return 0;
	getch ();
}
void Correct(char str[])
{
	int first = 0, last;
	last = strlen(str) - 1;
	//Xoa dau trang dau chuoi
	while (first < last && str[first] == ' ')
		first++;
	//Xoa dau trang cuoi chuoi
	while (last < first && str[last] == ' ')
		last--;
	//Viet hoa chu cai dau tien
	if (str[first] >= 'a' && str[first] <= 'z')
		str[first] = str[first] - 32;
		printf("%c", str[first]);
	for (int i = first + 1; i <= last; i++)
	{
		//Dua het ve chu thuong
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (i + 1 <= last)
		{
			//Bo dau trang thua o giua
			if (str[i] == str[i + 1] && str[i] == ' ')
			{
				continue;
			}
			//Neu la chu cai dau moi tu thi viet hoa
			if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		printf("%c", str[i]);
	}
	printf("\n");
}
//Dem so tu trong chuoi
int WordCount (char str[])
{
	int word = (str[0] != ' ');
	for (int i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			word++;
		}
	}
	return word;
}
void moiTu1dong (char str[])
{
	const char s[2] = " ";
	char *token;
	//lay token dau tien
	token = strtok(str, s);
	 //duyet qua cac token con lai
	while (token != NULL)
	{
		printf(" %s\n", token);
		token = strtok(NULL, s);
	}
}