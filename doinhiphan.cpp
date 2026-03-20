#include <stdio.h>
#include <string.h>
#include <stdio.h>

int kiemtrachuoi(char nhiphan[])
{
    for(int i=0; i<strlen(nhiphan); i++)
    {
      if (nhiphan[i] != '0' && nhiphan[i] != '1')
      {
        return 1;
        break;
      }
    }
return 0;
}

int tinhnhiphan(char nhiphan[], int thapphan)
{
  for (int i=0; i<strlen(nhiphan); i++)
  { 
    thapphan = (thapphan << 1) | (nhiphan[i] - '0');   
  }

  if (thapphan > 0) printf("\nma nhi phan sang thap phan la:%d", thapphan);

return thapphan;
}

int main()
{
  char nhiphan[7];
  int thapphan=0;

  printf("\nnhap ma nhi phan 8bit can chuyen doi:");
    fgets(nhiphan, sizeof(nhiphan), stdin);

  for(int i=0; i<strlen(nhiphan); i++)
  {
    if (nhiphan[i] == '\n') nhiphan[i] = '\0'; 
  }

  if (kiemtrachuoi(nhiphan) == 1)
  {
    printf("ma nhi phan khong hop le");
  }
  else 
  {
    tinhnhiphan(nhiphan, thapphan);
  }

return 0;
}
