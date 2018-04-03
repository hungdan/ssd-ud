#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int compare(int a, int b){
  return a == b;
}

int square(int a){
  return a * a;
}


int main() {
  int i=0;
  for(; !compare(i, 5); i++){
    printf("i = %d\n", i);
  }
  
  printf("%d squared is %d\n", i, square(i));
  
  unsigned num = 222222222;
  printf("Num = %d\n", num);
  
  srand(time(NULL));
  
  for (int i = 0; i < 10 ; i++){
  num = rand();
  printf("\n%d", (1 + num % 6));
  printf("\n%d", 1+num/(RAND_MAX/6+1)); // Note: 1+rand()%6 is wrong!
    
  }
  
  return 0;
}