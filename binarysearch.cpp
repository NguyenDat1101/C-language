#include <stdio.h>

int main()
{
  int n, low=1, high=100, doan, buoc=0;

  do
  {
    printf("nhap n (n>0 && n<100):");
      scanf("%d", &n);
  } while (n<0 || n>100);

  while(true)
  {
    doan=(low + high) / 2;
    buoc++;

    if (doan == n) 
    {
      printf("so ban doan trong %d buoc la: %d", buoc, doan);
      break;
    }
    else if (doan < n)
    {
      low = doan + 1;
    }
    else 
    {
      high = doan - 1;
    }
  }

return 0;
}
