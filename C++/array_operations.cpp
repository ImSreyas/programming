#include<iostream>
#include<conio.h>
using namespace std;
class arr
{
int n,a[10];
public:
void insert();
void display();
void test();
arr()
{
    n=-1;
}
};
int main()
{
arr op;
int ch;
do{
cout<<"Array operations :\n1.insert\n2.display\n3.exit\nEnter your choice : ";
cin>>ch;
switch(ch){
    case 1:op.insert();
    break;
    case 2:op.display();
    break;
    case 3:break;
    case 4:op.test();
    break;
    default:"Invalide choice";
}
}while(ch!=3);
getch();
return 0;


}
void arr::insert(){
    int element,loc;
    cout<<"Enter the location :";
    cin>>loc;
    if(n>=10||loc>(n+1))cout<<"\nLocation is not available.";
    else{
        cout<<"Enter the element : ";
        cin>>element;
        n=n+1;
        for(int i=n+2;i>=loc;i--){
            a[i+1]=a[i];

        }
        a[loc]=element;
        cout<<"Insertion successful\n";
        }
}
void arr::display(){
    if(n==-1){
        cout<<"Empty array.";
    }
    else{
        for(int i=0;i<=n;i++){
            cout<<a[i]<<"\t";
        }
        cout<<"\n";
    }
}
void arr::test()
{
    cout<<n;
}
