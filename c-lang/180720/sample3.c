#include<stdio.h>
#include<stdlib.h>
#define MAX_ARRAY_SIZE 80

void convert(char **char_array, int *int_array, int len);
void summarize(int *int_array, int len, int *total, int *ave);

int main(int argc,char *argv[]){
  int total;
  int average;
  int array[MAX_ARRAY_SIZE];

  if (argc < 2 || argc > MAX_ARRAY_SIZE + 1){
    puts("Arguments are error!");
    return EXIT_FAILURE;
  } 

  convert(argv + 1, array, argc -1);
  summarize(array, argc - 1, &total, &average);
  printf("total: %d\n",total);
  printf("average: %d\n",average);

  return EXIT_SUCCESS;
}

void convert(char **char_array, int *int_array, int len) {
  int i;
  for(i = 0; i < len; i++){
    int_array[i] = atoi(char_array[i]);
  }
  return;
}

void summarize(int *int_array, int len, int *total, int *ave){
  int i;
  *total = 0;
  for (i = 0; i < len; i++) {
    *total += int_array[i];
  }
  *ave = *total / len;
  return;
}
