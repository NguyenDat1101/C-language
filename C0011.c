#include <stdio.h>
// ham tinh giai thua
int giaithua(int n)
{
    int giaithua=1;
    for (int i=1;i<=n;i++)
    {
        giaithua*=i;
    }
    printf("giai thua cua %d la %d",n, giaithua);
return 0;
}

int main()
{
    int n;
    printf("nhap mot so nguyen n:");
        scanf("%d", &n);

    giaithua(n);
return 0;
}