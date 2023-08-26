/* 

program - next date finder
this program is used to find the next date when a data is given as an input.
we also need to consider the leap year too.
what is leap year ?
    A leap year is a year with an extra day, February 29th,
    added to the calendar to synchronize it with the solar year.

eg: 28/2/2024 needs to return 29/2/2024. because 2024 is a leap year.
    28/2/2023 will return 1/3/2023. because 2023 is not a leap year.

*/

#include<stdio.h>
#include<conio.h>
struct date {
    int day;
    int month;
    int year;
};
struct date getvalue();
struct date calculate(struct date s2);
void write(struct date s3);
int main() {
    struct date s;
    struct date c; 
    s=getvalue();
    c=s;
    s=calculate(s);
    if(s.day == c.day)
    {
    return 0;
    }
    else
    write(s);
    printf("\n\n\n");
    main();
}
struct date getvalue() {
    struct date s1;
    printf("Enter the date........ ");
    printf("\nday : ");
    scanf("%d",&s1.day);
    printf("month : ");
    scanf("%d",&s1.month);
    printf("year : ");
    scanf("%d",&s1.year);
    return s1;
}
struct date calculate(struct date s2) {
    struct date s4;
    int i;
    s4=s2;
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    i = arr[s2.month - 1];
    if(s2.year%4==0 && s2.month==2) i=29;
    if(s2.day<i) s2.day=s2.day+1;
    else if(s2.day==i) {
        s2.day=1;
        if(s2.month<12)
            s2.month=s2.month+1;
        else if(s2.month==12) {
            s2.month=1;
            s2.year=s2.year+1;
        }
        else {
            printf("Wrong date...");
            return s4;
        }
    }
    else if(s2.day>i) {
        printf("There is no such date...");
        return s4;
    }
    return s2;   
}
void write(struct date s3) {
    printf("\nNext day : %d/%d/%d",s3.day,s3.month,s3.year);
}
