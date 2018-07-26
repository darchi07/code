#include<stdio.h>
int main(void){
  char *data[5] = {"banana", "apple", "melon","pear","grape"};
  int next[5] = {2, 3, -1, 4, 0};
  int head = 1;
  int i = head;
  
  while(i != -1){
    printf("%s\n",data[i]);
    i = next[i];
  }
  return 0;
}
