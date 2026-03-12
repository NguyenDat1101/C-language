#include <stdio.h>
#include <stdbool.h>

void nhapmang(int n, int a[])
{
  for (int i=0; i<n; i++)
  {
    printf("\nnhap gia tri cho phan tu thu %d:", i);
      scanf("%d", &a[i]);
  }
}

void xuatmang(int n, int a[])
{
  printf("\ncac phan tu da nhap la:\t");

  for (int i=0; i<n; i++)
  {
    printf("%d\t", a[i]);
  }
}

void hoanvi(int *a, int *b) //ham hoan vi de su dung cho ham partition
{
  int tam;
  tam = *a;
  *a = *b;
  *b = tam;
}

int partition(int a[], int left, int right) //chia cac tung partition va de quy no
{
  int pivot=a[right]; //gan pivot la gia tri cuoi cua phan tu
  int i = left - 1;

  for (int j = left; j < right; j++)
  {
    if (a[j] <= pivot) //sap xep cac phan tu ben trai cua pivot
    {
      ++i;
      hoanvi(&a[i], &a[j]);
    }
  }
  ++i;
  hoanvi(&a[i], &a[right]);

return i;
}

void quicksort(int a[], int left, int right) //ham de quy quicksort
{
  if (left >= right) return;
  int p = partition(a, left, right);
  quicksort(a, left, p - 1);
  quicksort(a, p + 1, right);

}

void timkiemnhiphan(int a[], int n, int doan)
{
  int low = 0, high = n - 1, buoc = 0;

  while(true)
  {
    int mid = (low + high) / 2;
    buoc++;

    if (a[mid] == doan)
    {
      printf("\nso ban nhap trong %d buoc la: %d", buoc, mid);
      break;
    }
    else if (mid < doan)
    {
      low = mid + 1;
    }
    else if (mid > doan) 
    {
      high = mid - 1;
    }
    else 
    {
      printf("so ban nhap khong ton tai ben trong mang");
      break;
    }

  }

}

int main()
{
  int n, a[50], doan;
  
  printf("nhap n:");
    scanf("%d", &n);
  
  nhapmang(n, a);
  xuatmang(n, a);
  quicksort(a, 0, n - 1);
  xuatmang(n, a); //print lai mang sau khi sort

  do {
  printf("\nnhap so muon doan:");
    scanf("%d", &doan);
  } while (doan < 0);

  timkiemnhiphan(a, n, doan);

return 0;
}
