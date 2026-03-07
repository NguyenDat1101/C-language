#include <stdio.h>
// ham de qui
long giaithua(int n)
{
    if (n==0) return 1;
    else return (n * giaithua(n-1));
}

int main()
{
    int n;
    printf("\nnhap mot so nguyen n:");
        scanf("%d", &n);

    printf("giai thua cua %d la %d",n, giaithua(n));

return 0;
}