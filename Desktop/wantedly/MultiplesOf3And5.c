#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]){
    int i, j, sum;

    sum = 0;
    for(i = 3; i <= 5; i = i + 2){
      for(j = 1; j <=1000; j++){
	sum += i*j;
      }
    }
    printf("%d\n", sum);
    return 0;
}
