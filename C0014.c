#include <stdio.h>

void nhapmang(int a[], int n)
{
  for(int i=0; i<n; i++)
  {
    printf("\nnhap a[%d]:", i);
      scanf("%d", &a[i]);
  }
}

void chanle(int a[], int n)
{
  int flag=0;

  printf("\ncac phan tu chan trong mang la:");
  for(int i=0; i<n; i++)
  {
    if (a[i] % 2 == 0)
    {
      printf("%d ", a[i]);
      flag++;
    }
  }
  if (flag==0) printf("khong co phan tu chan trong mang");
}

int main()
{
  int a[50], n;
  
  printf("\nnhap n:");
    scanf("%d", &n);

  nhapmang(a, n);
  chanle(a, n);

return 0;
}
