#include <stdio.h>

void hoanvi(int *a, int *b)
{
    int tam;
    tam=*a;
    *a=*b;
    *b=tam;
}

int main()
{
    int a,b;
    printf("\nnhap so nguyen a:");
        scanf("%d", &a);

    printf("nhap so nguyen b:");
        scanf("%d", &b);

    hoanvi(&a, &b);

    printf("hoan vi thanh cong!\n");
    printf("a=%d, b=%d", a, b);

return 0;
}