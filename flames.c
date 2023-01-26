/* 

c program for flames -
flames is a game used to play by the kids on old days. 
it's a game for finding the relationship between two names or we can say two peoples.
steps 
1) write two names
2) take the first letter in the first name and cut all the same letters from the two names including the fist letter (this will happen only if there is one or more same letter available for the taken letter)
3) then go to second letter and do the same.
4) after traversing through all letters in two words, we will take the count of the remaining untouched or non-crossed letters in the two words.
5) the count will be a whole number ( like 1,2,3,...,7,... )
6) now comes the main part
8) we will count through the letters of the word 'flames' using the count value.
    if the count value is 2 we will stop at letter 'l' in the word 'flames'. 
    so what will happen if the value is 8. the word 'flames' contains only 6 letters. 
    in that case we will continue the counting from the start of the word 'flames' when we reached the end of the word 'flames'

                f   l   a   m   e   s

                1   2   3   4   5   6
                7   8   9   10  11  12 
                13  14  15  16  17  18
                19  20  21  22  ...

9) after each of the counting we will cross or cut that letter. the next counting will start from the next letter of the last crossed letter.
    if the count number is 2 we will cut letter 'l' and if it is 9 we will cut letter 'a'
10) in every run we won't consider or count the crossed letters.
11) we will continue counting until 1 letter remain in the word 'flames' ( 5 times )
12) after getting that last letter. we will choose the corresponding word for that (that will be the final answer.)

    f - friends
    l - lovers
    a - affectionate
    m - marriage
    e - enemies
    s - siblings

    the fun part is: the explanation is larger than the code...😅
*/

#include<stdio.h>
#include<string.h>
void flamesStageTwo(int);//Declaration : Function to find the last remaining character in "flames".
void print(char);//Decloration : Function to print the output.
void main()
{
    int i,j,count,strlen1,strlen2,s,flag,countl;
    char a[25],b[50];
    printf("\nEnter the first name : ");
    scanf("%s",a);
    printf("Enter the second name : ");
    scanf("%s",b);
    strlen1=strlen(a);
    strlen2=strlen(b);
    count=strlen1+strlen2;
    strcat(b,a);//concatinating or combining the first and second string.
    countl=count;
    for(i=0;i<countl;i++)
    {
        flag=0;
        if(b[i]!='*')
        {
            for(j=i+1;j<countl;j++)
            {
                if(b[i]==b[j])
                {
                    b[j]='*';
                    flag=1;
                    count--;
                }
            }
            if(flag==1)
            {
                count--;
            }
        }
    }
    flamesStageTwo(count);  
    //main function ends here...
}
//Function to find the last remaining character in 'flames'.
void flamesStageTwo(int count)
{
    int i,j,k=-1,h,co;
    char a[6]={'f','l','a','m','e','s'};
    char ch;
    //printf("Count is : %d",count);
    for(i=0;i<5;i++)
    {
        co=count;
        h=k+1;
        for(j=(k+1);j<(co+h);j++)
        {
            k=j;
            k=k%6;
            if(a[k]=='*')
            {
                co++;
            }
        } 
        a[k]='*';
    }
    for(i=0;i<6;i++)
    {
        if(a[i]!='*')
        {
            ch=a[i];
        }
    }
    print(ch);  //Function call to print the output.
}
//Function to print the output.
void print(char ch)
{
    switch(ch)
    {
        case 'f':printf("\n\tYOU TWO WILL BE GREAT FRIENDS"); break;
        case 'l':printf("\n\tYOU TWO ARE LOVERS"); break;
        case 'a':printf("\n\tAFFECTION"); break;
        case 'm':printf("\n\tYOU TWO WILL GET MARRIED"); break;
        case 'e':printf("\n\tYOU TWO ARE ENEMIES"); break;
        case 's':printf("\n\tYOU TWO ARE SIBLINGS"); break;
        default:printf("\n\tSOME ERROR OCCURRED....");
    }
    main();
}
