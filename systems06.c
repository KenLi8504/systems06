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
   printf("%d] \n",original[9]);

  int new[10];

  int *originalPointer = original;
  int *newPointer = new;

  for (int index = 0; index < 10; index++){
    *(newPointer + 9 - index) = original[index];
    int test = original[index];
    int newTest = new[9-index];
  }

  printf("[");
  for(int loop = 0; loop < 9; loop++)
   printf("%d, ", new[loop]);
   printf("%d] \n",new[9]);

  return 0;
}
