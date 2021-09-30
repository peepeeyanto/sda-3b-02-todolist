#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  char *start;
  char *end;
  char *todo;
  struct node *next;
}
node;

int main()
{
  node *head = NULL;

  node *n = malloc(sizeof(node));

  if(n == NULL)
  {
    return 1;
  }

  n -> start = "13.00";
  n -> end = "14.00";
  n -> todo = "call mom";
  n -> next = NULL;
  head = n;

  n = malloc(sizeof(node));
  if(n == NULL)
  {
    free(head);
    return 1;
  }
  n -> start = "15.00";
  n -> end = "16.00";
  n -> todo = "re-evaluate";
  head -> next = n;

  printf("start: %s", head -> start);
}
