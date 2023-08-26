#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
  int n = 10, sum=0;
  int first, last;
  char str[100];

  printf("enter a number : ");
  scanf("%d", &n);

  sprintf(str, "%d", n);
  sprintf(str[0], "%c", first);
  int l = str[sizeof(str)/sizeof(str[0])];
  sprintf(l, "%c", last);
  printf("sum of first and last numbers is : %d", first + last);
}
