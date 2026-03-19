#include <stdio.h>

void nhapmang(int a[50],int n)
{
  for (int i=0; i<n; i++)
  {
    printf("\nnhap gia tri thu %d:", i);
      scanf("%d", &a[i]);
  }
}

void max(int a[50], int n)
{
  int max=a[0];
  for (int i=0; i<n; i++)
  {
    if (max < a[i])
    {
      max = a[i];
    }
  }
  printf("gia tri lon nhat trong mang la:%d", max);
}

int main()
{
  int a[50], n;
  
  printf("nhap n:");
    scanf("%d", &n);

  nhapmang(a, n);
  max(a, n);

return 0;
}
