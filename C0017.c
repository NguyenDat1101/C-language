#include <stdio.h>
#include <math.h>

void nhapmang(int a[], int n)
{
  printf("nhap cac phan tu:");
  for (int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
}

int KTNT(int b)
{
  if (b < 2) return 0;
  for (int i=2; i<=sqrt(b); i++)
  {
    if (b % i == 0) return 0;
  }
  return 1;
}

int main()
{
  int a[100], n;
  printf("nhap n:");
    scanf("%d", &n);

  nhapmang(a, n);

  FILE *f;
  f = fopen("prime.txt", "a+");
  if (f == NULL) printf("FILE khong ton tai");
  else 
  {
    for (int i=0; i<n; i++)
    {
      if (KTNT(a[i])) fprintf(f, "%d\t", a[i]);
    }
    fclose(f);
  }
return 0;
}
