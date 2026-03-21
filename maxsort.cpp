#include <stdio.h>

void nhapmang(int a[], int n)
{
  for(int i=0; i<n; i++)
  {
    printf("nhap gia tri cho mang thu a[%d]:", i);
      scanf("%d", &a[i]);
  }
}

void hoanvi(int *a, int *b)
{
  int tam;
  tam=*a;
  *a=*b;
  *b=tam;
}

void sort(int a[], int n)
{
  for(int i=0; i<n-1; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      if (a[i] < a[j])
      {
        hoanvi(&a[i], &a[j]);
      }
    }
  }
}

void xuatmang(int a[], int n)
{
  printf("cac gia tri cua mang la:");
  for(int i=0; i<n; i++)
  {
    printf("%d\t", a[i]);
  }
}

int main()
{
  int a[50], n;

  printf("\nnhap n:");
    scanf("%d", &n);
  
  nhapmang(a, n);
  sort(a, n);
  xuatmang(a, n);

  printf("gia tri lon nhat trong mang la:%d", a[0]);

return 0;
}
