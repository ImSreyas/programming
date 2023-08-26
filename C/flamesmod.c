

#include<stdio.h>
void main()
{
    int count,i,j,k=-1,h,co;
    char a[6]={'f','l','a','m','e','s'};
    char ch;
    printf("Count : ");
    scanf("%d",&count);
    for(i=0;i<5;i++) {
        co=count;
        h=k+1;
        for(j=(k+1);j<(co+h);j++) {
            k=j;
            k=k%6;
            if(a[k]=='*') {
                co++;
            }
        } 
        a[k]='*';
    }
    for(i=0;i<6;i++) {
        if(a[i]!='*') {
            ch=a[i];
        }
    }
    switch(ch) {
        case 'f': printf("\tFRIENDS"); break;
        case 'l': printf("\tLOVERS"); break;
        case 'a': printf("\tAFFECTIONATE"); break;
        case 'm': printf("\tMARRIAGE"); break;
        case 'e': printf("\tENEMIES"); break;
        case 's': printf("\tSIBLINGS"); break;
        default: printf("\tSOME ERROR OCCURRED....");
    }
}