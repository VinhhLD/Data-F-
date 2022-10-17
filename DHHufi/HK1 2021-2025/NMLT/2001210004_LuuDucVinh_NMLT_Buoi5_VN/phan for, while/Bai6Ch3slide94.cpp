#include <stdio.h>

int main()
{
    int n, m, i;
    int dem = 0;
    printf("Nhap (n,m): ");
    scanf("%d%d",&n,&m);
    if (n > m)
    {
        printf("Vui long nhap n < m!");
    }
    else{
        printf("So luong so chan trong (%d,%d):  ", n, m);
        for (i = n; i <= m; i++)
        if (i % 2 == 0)
        dem++;
        printf("%d", dem);
    }
    return 0;
}