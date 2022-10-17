//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	int m, n, i, j, k;
//	n = 5;
//	m = 3;
//	int alloc[5][3] = { {0, 1, 0},
//						{2, 0, 0},
//						{3, 0, 2},
//						{2, 1, 1},
//						{0, 0, 2} };
//	int max[5][3] = { {7, 5, 3},
//						{3, 2, 2},
//						{9, 0, 2},
//						{2, 2, 2},
//						{4, 3, 3} };
//	int avail[3] = { 3, 3, 2 };
//	int f[5], ans[5], ind = 0;
//	for (k = 0; k < n; k++)
//		f[k] = 0;
//	int need[5][3];
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			need[i][j] = max[i][j] - alloc[i][j];
//	int dem[5];
//	for (int i = 0; i < n; i++)
//		dem[i] = 0;
//	int y = 0;
//	for (k = 0; k < 5; k++)
//		for (i = 0; i < n; i++)
//			if (f[i] == 0)
//			{
//				int flag = 0;
//				for (j = 0; j < m; j++)
//					if (need[i][j] > avail[j])
//					{
//						dem[i]++;
//						flag = 1;
//						break;
//					}
//				if (flag == 0)
//				{
//					ans[ind++] = i;
//					for (y = 0; y < m; y++)
//						avail[y] += alloc[i][y];
//					f[i] = 1;
//				}
//			}
//	int z = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dem[i] == 5)
//			printf("chuoi tac nghen tai P%d\n", i);
//		else
//			z++;
//	}
//	if (z == 5)
//		printf("Chuoi an toan");
//	_getch();
//}