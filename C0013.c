#include <stdio.h>

void nhapmang(int a[], int n)
{
  for(int i=0; i<n; i++)
  {
    printf("nhap a[%d]:", i);
    scanf("%d", &a[i]);
  }
}

void timx(int a[], int n, int x)
{
  int dem=0;
  for(int i=0; i<n; i++)
  {
    if (a[i] == x) dem++;
  }
  if (dem>0)
    {
      printf("so lan xuat hien cua %d la %d", x, dem);
      printf(" vi tri lan luot trong mang la: ");
    for(int i=0; i<n; i++)
      {
        if(a[i] == x)
        {
          printf("%d\t", i);
        }
      }
   }
  else 
  {
    printf("\nkhong tim thay %d trong mang", x);
  }
}

int main()
{
  int a[50], n, x;
  
  printf("\nnhap n:");
    scanf("%d", &n);

  nhapmang(a, n);

  printf("\nnhap x:");
    scanf("%d", &x);

  timx(a, n, x);

return 0;
}
