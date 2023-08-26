#include <iostream>
#include <conio.h>
using namespace std;
bool search(int a, int b,int arr[],int element){
    while(a<=b){
    int mid = (a+b)/2;
    if (arr[mid] == element){
        cout<< "element found ....";
        exit(0);
    }
    else if(arr[mid] < element)search(mid+1,b,arr,element);
    else search(a,mid-1,arr,element);
    }
}
int main(){
    int arr[25],n,element;
    cout<<"enter the no.of elements : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"enter the element : ";
        cin>>arr[i];
    }
    cout<<"enter an element to search : ";
    cin>>element;
    bool result = search(0,n-1,arr,element);
    return 0;
}