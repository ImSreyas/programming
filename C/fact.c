#include<stdio.h>
#include<conio.h>
void main(){
    int num,result=1;
    printf("enter a number :");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        result*=i;
    }
    printf("result is : %d",result);
}