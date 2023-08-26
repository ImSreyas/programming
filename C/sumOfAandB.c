#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,sum;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum of %d and %d is = %d\n\n",a,b,sum);
    main();
}