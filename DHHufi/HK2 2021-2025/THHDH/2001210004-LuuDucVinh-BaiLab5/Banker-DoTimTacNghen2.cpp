#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int i, j, k;
	int n = 5, m = 3;
	int alloc[5][3] = { {0, 1, 0},
						{2, 0, 0},
						{3, 0, 2},
						{2, 1, 1},
						{0, 0, 2} };
	int max[5][3] = { {7, 5, 3},
						{3, 2, 2},
						{9, 0, 2},
						{2, 2, 2},
						{4, 3, 3} };
	int avail[3] = { 0, 1, 0 };
	int f[5], safe[5];
	for (k = 0; k < n; k++)
		f[k] = 0;
	int need[5][3];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			need[i][j] = max[i][j] - alloc[i][j];
	int count = 0;
	while (count < n)
	{
		bool found = false;
		for (i = 0; i < n; i++)
		{
			if (f[i] == 0)
			{
				for (j = 0; j < m; j++)
				{
					if (need[i][j] > avail[j])
					{
						break;
					}
				}
				if (j == m)
				{
					for (int y = 0; y < m; y++)
					{
						avail[y] += alloc[i][y];
					}
					safe[count++] = i;
					f[i] = 1;
					found = true;
				}
			}
		}
		if (found == false)
		{
			printf("Cac tien trinh dang o trang thai khong an toan!!!\n");
			break;
		}
		else
		{
			printf("Cac tien trinh o trang thai an toan\n");
			break;
		}
	}
	return 0;
	getch ();
}
