#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int data;
  struct _node *next;
} node;


node * pridej(node *kam, int d){
  node *neww = (node *)malloc(sizeof(node));
  neww->data = d;
  neww->next = kam;
  return neww;
}

void tisk_seznamu(node *seznam){
 while(seznam){
    printf("%i \n", seznam->data);
    seznam = seznam->next;
 }
}

node * smaz(node **seznam, int i){
  node *p, *q;

  p = *seznam;

  if (*seznam == NULL){ //nebo if (!p)
      printf("Seznam je prazdny, neni co mazat.\n");
      return NULL;
  }

  if (p->data == i)//mazani hlavy je specialni
  {
   *seznam = p->next;
   p->next = NULL; //je toto spravne?
   return p;
  }

  q = p->next;

   while(q){
      if (q->data == i) {
        p->next = q->next;
        q->next = NULL;
        return q;
      }
      p=q;
      q=q->next;
   }
}

int main() {
  int i, n;
  printf("Zadej velikost seznamu: (vetsi nez 4)");
  scanf("%i", &n);
  node *szn = NULL, *smazany;
  for(i=0;i<n;i++) szn = pridej(szn, i);
  tisk_seznamu(szn);
  smazany = smaz(&szn,4);
  printf("Smazany: %i \n", smazany->data);
  tisk_seznamu(szn);
  return 0;
}
