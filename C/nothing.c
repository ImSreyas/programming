#include<stdio.h>
#include<conio.h>
int min(int a,int b){
    return (a < b)? a : b;
}
int max(int a ,int b ){
    return (a > b)? a : b;
}
void main(){
    int a, b ,c,small, large ;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("enter 1 if you want smallest and 2 if you want largest number : ");
    scanf("%d",&c);
    if (c==1) {small = min ( a , b ) ; printf("Smallest number is : %d", small);}
    if (c==2) {large = max( a , b ) ; printf("Smallest number is : %d", large);}

}