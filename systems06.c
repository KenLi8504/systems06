#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
  int original [10];
  srand(time(NULL));
  original[0] = 0;
  for (int i = 1; i < 10; i++){
    original[i] = rand();
  }

  printf("This is the original randomly generated array\n");
  printf("[");
  for(int loop = 0; loop < 9; loop++)
   printf("%d, ", original[loop]);
   printf("%d] \n",original[9]);

  int *originalPointer = original;
  int new[10];
  int *newPointer = new;


  for (int index = 0; index < 10; index++){
    *(newPointer + 9 - index) = originalPointer[index];
  }

  printf("This is a new array using * \n");
  printf("[");
  for(int loop = 0; loop < 9; loop++)
   printf("%d, ", new[loop]);
   printf("%d] \n",new[9]);

  int newer[10];
  int *evenNewerPointer = newer;

  for (int index = 0; index < 10; index++){
    evenNewerPointer[9-index] = originalPointer[index];
  }

  printf("This is a new array using [] \n");
  printf("[");
  for(int loop = 0; loop < 9; loop++)
   printf("%d, ", newer[loop]);
   printf("%d] \n",newer[9]);

  return 0;
}
