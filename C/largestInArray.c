#include<stdio.h>
#include<conio.h>
void main(){
    int arr[25];
    int min,n;
    printf("Enter the no.of elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter the element %d : ",i+1);
    scanf("%d",&arr[i]);
    }
    while(n>0){
    min=arr[0];
    for(int i=0;i<n;i++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    break;
    }
    printf("Largest no. is %d.",min);
}