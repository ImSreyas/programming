#include<iostream>
using namespace std;
int main()
{
    int i,flag,a[25],n,key;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : \n";
    for(i=0;i<n;i++)
    {
        cout<<"Element no."<<i+1<<" : ";
        cin>>a[i];

    }
    cout<<"Enter the key to search : ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        } 
       
    }
    if(flag==1)
    {
        cout<<"Element "<<key<< " is found at location "<<(i+1);

    }
    else{
        cout<<"Element not found";
    }
    return 0;
}