/*
  date:180724
  sample1
  
  
*/
#include<stdio.h>
#include<stdlib.h>
#define DEFAULT_MAX_VALUE 20

int main(int argc, char *argv[]){
  
  int max = (argc == 2 ) ? atoi(argv[1]) : DEFAULT_MAX_VALUE;
  int i;
  int even_total = 0;
  int odd_total = 0;

  printf("max:%d\n",max);//引き数を出力
  printf("[");
  for ( i = 0; i <= max ;i++){
    printf("%d ",i);
    if( i % 2 == 0){//偶数の時
      even_total += i;
    } else {//奇数の時
      odd_total += i;
    }
  }
  printf("]\n");
  printf("Even total: %d\n ",even_total);
  printf("Odd total:%d\n",odd_total);

  return 0;
}
