#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
  int original [10];
  srand(time(NULL));
  for (int i = 0; i < 10; i++){
    original[i] = rand();
  }
  printf("[");
  for(int loop = 0; loop < 9; loop++)
   printf("%d, ", original[loop]);
   printf("%d] \n",original[10]);
  return 0;
}
