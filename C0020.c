#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
  int data;
  struct Node* link;
} NODE;

NODE* CreateNode(int value)
{
 struct Node* node = malloc(sizeof(struct Node));
 node->data = value;
 node->link = NULL;

return node;
}

void printNode(NODE* head)
{
  NODE* temp = head;
  if (temp == NULL) return;

  while(temp != NULL)
  {
    printf("%d\n", temp->data);
    temp = temp->link;
  }
}

int main()
{
  NODE* node1 = CreateNode(10);
  NODE* node2 = CreateNode(20);
  NODE* node3 = CreateNode(30);

  node1->link = node2;
  node2->link = node3;

  printNode(node1);

return 0;
}
