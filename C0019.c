#include <stdio.h>

int HamMu(int n, int a)
{
  int kq = 1;
  for (int i=1; i<=n; i++)
  {
    kq *= a;
  }
  return kq;
}

typedef struct DaThuc
{
  int SoMu;
  int HangSo;
} dathuc;

typedef struct Node
{
  dathuc data;
  struct Node *link;
} node;

typedef struct list 
{
  Node *First;
  Node *Last;
} list;

void AddData(list *l, Node *add)
{
  if (l.First == NULL)
  {
    l->First = add;
    l->Last = l->First;
  }
  else
  {
    add->link = l->First;
    l->First = add;
  }
}


