#include<stdio.h>
int main(void){
  struct elem {
    char *data;
    struct elem *next;
  };
  typedef struct elem List;
  List ap = {"apple",NULL};
  List pr = {"pear",NULL};
  List gr = {"grape",NULL};
  List bn = {"banana",NULL};
  List ml = {"melon",NULL};
  List *head;
  List *p;
  ap.next = &pr;
  pr.next = &gr;
  gr.next = &bn;
  bn.next = &ml;
  head = &ap;
  
  p = head;

  while(p != NULL){
    printf("%s\n",p->data);
    p = p->next;
  }
  return 0;
}
