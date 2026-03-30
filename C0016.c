#include <stdio.h>

void hoannghich(int m, int *M)
{
  if (m == 0) return;
  *M = (*M) * 10 + (m % 10);
  hoannghich(m / 10, M);
}

int main()
{
  int m, n, M = 0;
  printf("nhap m:");
    scanf("%d", &m);
  printf("nhap n:");
    scanf("%d", &n);
  
  hoannghich(m, &M);
  printf("m sau khi hoan nghich la: %d\n", M);
  printf("vay M * n = %d", M*n);

return 0;
}
