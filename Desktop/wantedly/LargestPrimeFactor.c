#include <stdio.h>
#include <stdlib.h>

#define VALUE 600851475143

boolean isPrime(long num);

int main(int argv, char *argc[]){
  long num = VALUE / 2;
  for(; num > 1; num--){
    if(isPrime(num)) break;
  }
  printf("%d\n2", num);
  return 1;
}

boolean isPrime(long num){
  if(VALUE % num == 0) return true;
  else return false;
}
