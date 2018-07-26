/*
  date:180724
  sample5.c
*/


#include<stdio.h>
#include<stdlib.h>

#define MAX_LINE_LENGTH 256

int main(int argc, char *argv[]){
  FILE *fp;
  char line[MAX_LINE_LENGTH];
  
  
  if (argc != 2){
    puts("An argument is missing!");
    return EXIT_FAILURE;
  }

  if((fp = fopen(argv[1],"r")) == NULL){
    puts("File open error!");
    return EXIT_FAILURE;
  }
  while(fgets(line, MAX_LINE_LENGTH, fp) != NULL){
    int i;
    for(i = 0; line[i] != '\0' && i < MAX_LINE_LENGTH; i++){
      if(line[i] == ','){
	line[i] = '\t';
      }	
    }
  }
  
  fclose(fp);

  return EXIT_SUCCESS;
}
