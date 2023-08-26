#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[20],temp,temp1;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"\nEnter the "<<n<<" elements \n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<(i+1)<<" : ";
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            for(j=i;j>=1;j--)
            {
                if(a[j]<a[j-1])
                {
                    temp1=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp1;
                }
            }
        }
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}