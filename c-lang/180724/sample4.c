/*
  date: 180724
  sample4.c
*/

#include<stdio.h>
#include<stdlib.h>

#define ITEMS 3

typedef struct Price{
  int item_code;
  int price;
}Price;

typedef struct Stock{
  int item_code;
  int stock;
}Stock;

void inventory(Stock stk[], Price prc[],int len, int *sum);
int getprice(int item_code, Price prc[], int len);

int main(void){
  Price price[ITEMS] = {{101, 250}, {102,200},{103,200}};
  Stock stock[] = {{101, 134},{102, 335}};
  const int size = sizeof stock / sizeof(Stock);
  int assets = 0;
  inventory(stock, price, size, &assets);
  printf("assets: %d",assets);

  return EXIT_SUCCESS;  
}

void inventory(Stock stk[], Price prc[],int len, int *sum){
  int i;
  *sum = 0;
  for(i = 0; i < len; i++) {
    *sum += stk[i].stock * getprice(stk[i].item_code, prc, ITEMS); 
  }
}

int getprice(int item_code, Price prc[], int len){
  int i;
  for(i = 0; i < len; i++){
    if(prc[i].item_code == item_code){
      return prc[i].price;
    }
  }
}
