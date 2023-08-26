#include<stdio.h>
void arrSum(int b[5]) {
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+b[i];
    }
    printf("%d",sum);
}
int main() {
    int a[5]={1,6,9,4,5};
    arrSum(a);
} 