#include <stdio.h>

int main()
{
    int n, giaithua, sum=0, r, dem=0;

     printf("\nnhap n so nguyen duong:");
        scanf("%d", &n);
    int tam=n, bientamdem=n;
    while (bientamdem>0)
    {
        bientamdem=bientamdem/10;
        dem++;
    }
    while (n>0)
    {
        r=n%10;
        giaithua=1;
        for (int i=0;i<dem;i++)
        {
            giaithua*=r;
        }
        sum += giaithua;
        n=n/10;
    }
    if (sum==tam)
    {
        printf("so tren la so armstrong\n");
    } else
    {
        printf("so tren khong phai la so armstrong\n");
    }
return 0;
}