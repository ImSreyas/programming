#include<stdio.h>
void main(){
  int a, b, c;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  printf("Enter the third number : ");
  scanf("%d", &c);

  if(a > b){
    if(a > c){
      printf("%d is greater\n", a);
    } else if (c > b){
      printf("%d is greater\n", c);
    }
  } else if(b > c){
      printf("%d is greater\n", b);
  } else {
      printf("%d is greater\n", c);
  }
}
