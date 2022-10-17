#include <stdio.h>

int main()
{
    int a, b, uc, bc;
    printf("Nhap (a,b): "); scanf("%d%d",&a, &b);
    for (uc = a; uc >= 1; uc--)
    {
        if (a%uc == 0 && b%uc == 0)
        {
            printf("USCLN(%d,%d): %d",a, b, uc);
            break;
        }
    }
    bc = (a * b) / uc;
    printf("\nBCSNN(%d,%d): %d",a, b, bc);
    return 0;
}
