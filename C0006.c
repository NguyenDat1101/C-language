#include <stdio.h>

int KTNT(int n)
{
    if (n<2) return 0;
    for (int i=0; i*i<n; i++)
    {
        if(i%n==0)
        {
            return 0;
        }
    }
return 1;
}

int main()
{
    int n;
printf("\nnhap mot so nguyen duong n:");
    scanf("%d", &n);

if (KTNT(n==1))
{
    printf("%d la mot so nguyen to!\n", n);
} else 
{
    printf("%d khong phai la so nguyen to!\n", n);
}

return 0;
}

