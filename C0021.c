#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
  int hangso;
  int somu;
  struct Node* link;
} NODE;

typedef struct list 
{
  NODE* head;
  NODE* tail;
} LIST;

int hammu(int a, int n)
{
  int kq=1, i=0;
  while(i<n)
  {
    kq *= a;
    i++;
  }
return kq;
}

void themcuoinode(LIST* l, NODE* NewNode)
{
  if (l->head == NULL)
  {
    l->head = NewNode;
    l->tail = l->head;
  }
  else
  {
    l->tail->link = NewNode;
    l->tail = NewNode;
  }
}

void indanhsach(LIST* l)
{
  NODE* tam = l->head;
  
  while(tam != NULL)
  {
    printf("%dx^%d", tam->hangso, tam->somu);
    tam = tam->link;
  }
}

NODE* TaoNode(int hs, int sm)
{
  NODE* newNode = malloc(sizeof(struct Node));
  
  printf("\nnhap mot hang so:");
    scanf("%d", &newNode->hangso);
  printf("\nnhap so mu");
    scanf("%d", &newNode->somu);

  newNode->link = NULL;

return newNode;
}
