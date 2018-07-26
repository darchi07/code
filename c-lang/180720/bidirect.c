#include<stdio.h>
int main(void){
  typedef struct elem {
    char *data;
    struct elem *next;
    struct elem *prev;
  } Dlist;
  
  Dlist ap = {"apple", NULL, NULL};
  Dlist pr = {"pear", NULL, NULL};
  Dlist gr = {"grape", NULL, NULL};
  Dlist bn = {"banana", NULL, NULL};
  Dlist ml = {"melon", NULL, NULL};
  
  Dlist *head;
  Dlist *tail;
  Dlist *p;

  ap.next = &pr;
  pr.next = &gr;
  gr.next = &bn;
  bn.next = &ml;
  
  ml.prev = &bn;
  bn.prev = &gr;
  gr.prev = &pr;
  pr.prev = &ap;
  
  head = &ap;
  tail = &ml;
  p = tail;
  
  while(p != NULL){
    printf("%s\n",p->data);
    p = p->prev;
  }
  
  return 0;
  
}
