#include<stdio.h>

void keisan(int *p_point,int *p_sum,int *p_avg);
int main(void){
  int point[5];
  int sum = 0;
  int avg = 0;

  for(int i = 0; i < 5; i++){
    printf("%d student->",i+1);
    scanf("%d",&point[i]);
  }	
  
  keisan(point, &sum, &avg);
  printf("sum:%d, average:%d",sum,avg);

  return 0;
}

void keisan(int *p_point,int *p_sum,int *p_avg){
  for(int i = 0; i < 5 ;i++){
    *p_sum = *p_sum + *(p_point + i );
  }

  *p_avg = *p_sum / 5;
}
