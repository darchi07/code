/*
  date:180724
  sample2
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
int search(int key, int len, int array[]);

int main(int argc, char *argv[]){
  int array[] = {5, 18 ,23, 30, 44};
  const int size = sizeof array / sizeof(int);
  
  if (argc != 2){//引数が１以上の時エラーを返す
    puts("An argument is missing.");
    return EXIT_FAILURE;
  }
  
  if(search(atoi(argv[1]),size, array)){
    puts("FOUND IT!");
  } else {
    puts("NOT FOUND!");
  }
  return EXIT_SUCCESS;
}

int search(int key, int len, int array[]){
  int left = 0;
  int center = 0;
  int right = len - 1;
  
  while(left <= right){
    center = (left + right) / 2;
    if(key == array[center]){
      return TRUE;
    } else {
      if(key < array[center]){//中央の値より小さいとき
	right = center - 1;
      } else {//中央の値より大きい時
	left = center + 1;
      }
    }
  }
  return FALSE;
}
