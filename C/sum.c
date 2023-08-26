#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0,r;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("sum is %d",sum);
    return 0;
}