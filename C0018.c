#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoachuoi(char chuoi[])
{
  getchar();
  chuoi[0] = toupper(chuoi[0]);

  for (size_t i=1; i<strlen(chuoi); i++)
  {
    if (chuoi[i] == ' ')
    {
      i++;
      chuoi[i] = toupper(chuoi[i]);
    }
    else {
    chuoi[i] = tolower(chuoi[i]);
    }
  }
  printf("chuoi sau khi chuan hoa:%s", chuoi);
}

int main()
{
  char chuoi[100];

  printf("nhap vao mot chuoi can chuan hoa:");
    fgets(chuoi, sizeof(chuoi), stdin);

  chuanhoachuoi(chuoi);
return 0;
}
