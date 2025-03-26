#include <stdio.h>
#include "is-even.h"
int isEven(int a){
  a = a % 2;

  if (a == 0){
    printf("Is Even");
  }

  else if (a == 1){
    printf("Is Odd");
  }
  
  else{
    printf("That is NOT a valid number");
  }
return a;
}