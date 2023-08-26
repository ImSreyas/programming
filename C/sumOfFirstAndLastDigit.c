#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main() {
  int n, first, last, sum;
  char str[100];

  printf("enter a number : ");
  scanf("%d", &n);

  sprintf(str, "%d", n);


  // Calculate the sum of the first and last digits
  sum = (int)(str[0]) + (int)(str[strlen(str)-1]); 
  printf(typeof(str[0]));

  // Print the sum
  printf("sum of first and last numbers is : %d\n", sum);
  return 0;
}
