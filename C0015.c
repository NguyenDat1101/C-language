#include <stdio.h>
#include <string.h>

typedef struct SinhVien
{
  char hoten[30];
  char mssv[10];
  int namsinh;
  float diem;
}sv;

void nhapsinhvien (struct SinhVien *sv)
{

  printf("nhap ten sinh vien:");
    fgets(sv->hoten, sizeof(sv->hoten), stdin);
    sv->hoten[strcspn(sv->hoten, "\n")] = 0;

  printf("nhap mssv:");
    fgets(sv->mssv, sizeof(sv->mssv), stdin);
    sv->mssv[strcspn(sv->mssv, "\n")] = 0;
  
nhaplai:
  printf("nhap nam sinh:");
    scanf("%d", &sv->namsinh);
      if (sv->namsinh < 1900 || sv->namsinh > 2026)
      {
        printf("\nnam sinh khong hop le\n");
          goto nhaplai;
      }
nhaplai1:
  printf("nhap diem:");
    scanf("%f", &sv->diem);
      if(sv->diem < 0 || sv->diem > 4)
      {
        printf("\ndiem khong hop le\n");
        goto nhaplai1;
      }
  getchar();
}

void hoanvi(struct SinhVien *a, struct SinhVien *b)
{
  struct SinhVien tam;
  tam = *a;
  *a = *b;
  *b = tam;
}

void nhapnhieusinhvien(int n, struct SinhVien sv[])
{
  for (int i=0; i<n; i++)
  {
    nhapsinhvien(&sv[i]);
  }
}

void xuatsinhvien(struct SinhVien sv[], int n)
{
  printf("*****************************************\n");
  printf("* Ho va Ten || nam sinh || mssv || diem *\n");

  for(int i=0; i<n; i++)
  {
    for (int j=i+1; j<n; j++)
    {
      if (sv[i].diem < sv[j].diem) hoanvi(&sv[i], &sv[j]);
    }
  }

  for(int i=0; i<n; i++)
  {
  printf("%s\t%d\t%s\t%.2f\n", 
      sv[i].hoten, 
      sv[i].namsinh, 
      sv[i].mssv, 
      sv[i].diem);
  }
}

int main()
{
  int n;
  printf("\nnhap so luong sinh vien:");
    scanf("%d", &n);

  getchar();

  struct SinhVien sv[100];
  nhapnhieusinhvien(n, sv);
  xuatsinhvien(sv, n);

return 0;
}
