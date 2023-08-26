#include<stdio.h>
#include<conio.h>
int main(){
    int a[2][3]={{1,2,3},{5,6,7}};


    printf("your matrix is : \n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix transpose is : \n");

     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}