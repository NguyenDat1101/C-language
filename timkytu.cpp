#include <stdio.h>
#include <string.h>

int main()
{
  char chuoi[50], kytu[50], dem=0;
  
  printf("nhap mot xau ky tu:\n");
   fgets(chuoi, 50, stdin);

  printf("\nnhap mot ky tu trong chuoi:");
    fgets(kytu, 50, stdin);

  for(int i=0; i < strlen(chuoi); i++)
  {
    if (kytu[0] == chuoi[i]) dem++;
  }

  if (dem > 0)
  {
    printf("so ky tu lap lai trong chuoi la:%d", dem);
  }
  else 
  {
    printf("ky tu khon ton tai ben trong chuoi");
  }

return 0;
}
