#include <stdio.h>
#include <stdlib.h>
#define FIBMAX 4000000

int isExeedFibonacci(int value);
int isFibValueEven(int value);
int nextFib(int pre1, int pre2);

int main(int argv, char *argc[]){
  int value, pre1, pre2, sum;

  sum = 0;
  pre1 = pre2 = 1;
  value = nextFib(sum, pre1);
  while(isExeedFibonacci(value)){
    sum += isFibValueEven(value);
    pre2 = pre1;
    pre1 = value;
    value = nextFib(pre1, pre2);
  }

  printf("%d\n", sum);
  return 1;
}

int isExeedFibonacci(int value){
  if(value > FIBMAX) return 0;
  return 1;
}

int nextFib(int pre1, int pre2){
  return pre1+pre2;
}

int isFibValueEven(int value){
  if(value % 2 == 0) return value;
  else return 0;
}
