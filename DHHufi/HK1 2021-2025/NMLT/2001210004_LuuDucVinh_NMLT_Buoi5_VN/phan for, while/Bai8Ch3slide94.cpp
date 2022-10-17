#include <stdio.h>

int main()
{
    int n, i, s;
    n = 100;
    s = 0;
    for (i = 1; i < n; i++)
        s = s + i;
        printf("Tong cac so tu nhien lon nhat nho hon 100: %d", s);

    return 0;
}
