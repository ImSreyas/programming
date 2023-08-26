#include <stdio.h>
#include <math.h>
void main(){
  int member, interest, amount, t, arr;
  float unitValue;
  printf("enter the total amount : ");
  scanf("%d", &amount);
  printf("enter the total interest got : ");
  scanf("%d", &interest);
  printf("enter the total number of members : ");
  scanf("%d", &t);
  unitValue = (float)interest/amount;
  for(int i=0; i<t; i++){
    printf("\nenter the total amount given by member %d : ", i+1);
    scanf("%d", &arr);
    printf("interest got : %f \ntotal amount : %f\n", arr*unitValue, arr+(arr*unitValue));
  }
}
