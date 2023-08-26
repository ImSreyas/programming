#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
class linkedlist
{
    node* start;
    int counter;
    public:
    linkedlist()
    {
        start=NULL;
        counter=-1;
    }
    void insertbegin();
    void insertend();
    void insertatposition();
    void deletbegin();
    void deleteend();
    void deleteatposition();
    void display();
    void search();



};
void linkedlist::insertbegin()
{
node* temp=new node;
cout<<"Enter the element : ";
cin>>temp->data;
counter++;
if(start==NULL)
{
    temp->next=NULL;

}
else{
    temp->next=start;

}
start=temp;


}
void linkedlist::insertatposition()
{
    int pos;
    cout<<"Enter the position : ";
    cin>>pos;
    if(pos>counter+1){
        cout<<"position not avilable."<<endl;
    }
    else{
        if(pos==0){
            linkedlist::insertbegin();
        }
        else{
            node* temp=new node;
            cout<<"Enter the element : ";
            cin>>temp->data;
            counter++;
            node* a=start;
            for(int i=0;i<pos-1;i++){
                a=a->next;
            }
            temp->next=a->next;
            a->next=temp;
        }
    }
}
void linkedlist::insertend()
{
    node* temp=new node;
    cout<<"Enter the element : ";
    cin>>temp->data;
    counter++;
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        node* a=start;
        while(a->next!=NULL){
            a=a->next;
        }
        a->next=temp;

    }
}
void linkedlist::display(){
    if(start==NULL){
        cout<<"LIST is empty.";

    }
    else{
        cout<<"\n"<<endl;
        node* temp=start;
        for(int i=0;i<=counter;i++){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
    cout<<" "<<endl;
    for(int i=0;i<=counter;i++){
        cout<<"-------";
    }
    cout<<"\n";
}
void linkedlist::search(){
    if(start==NULL){
        cout<<"\nsearch is not possible in EMPTY list.";
    }
    else{
        int element,isfound=0;
        node* temp=start;
        cout<<"Enter the eleement : ";
        cin>>element;
        for(int i=0;i<=counter;i++){
            if(temp->data==element){
                cout<<"Element found.";
                isfound=1;
            }
            temp=temp->next;
            
        }
        if(isfound==0){
                cout<<"Element not found.";
            }
    }
}
void linkedlist::deletbegin(){
    if(start==NULL){
        cout<<"EMPTY\n";

    }
    else{
        node* temp=start;
        start=start->next;
        delete temp;
        counter--;
        cout<<"\nDeleted.";
    }
}
void linkedlist::deleteatposition(){
    if(start==NULL){
        cout<<"EMPTY\n";
    }
    else{
        int pos;
        cout<<"Enter the position : ";
        cin>>pos;
        if(pos>counter+1){
            cout<<"Position out of bound.";
        }
        else{
        if(pos==0){
            linkedlist::deletbegin();
        }
        else{
            node* temp=start;
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            node* a=temp->next;
            temp->next=a->next;
            delete a;
            counter--;
            cout<<"Deleted.";


        }
        }
    }
}
void linkedlist::deleteend(){
    if(start==NULL){
        cout<<"empty list.";

    }
    else{
        node* b=start;
        node* a=start->next;
        for(int i=0;i<counter-1;i++){
            b=a;
            a=a->next;
        }
        delete a;
        b->next=NULL;
        counter--;
        cout<<"Deleted.";
    }
}
int main(){
    int ch;
    linkedlist list;
    do{
        cout<<"\n1.insert at begin\n2.insert at position\n3.insert at end\n4.display\n5.exit\n6.search\n7.delete at begining\n8.delete at position";
        cout<<"\n9.delete at end\nEnter the choice : ";
        cin>>ch;
        switch(ch){
            case 1:list.insertbegin();
            break;
            case 2:list.insertatposition();
            break;
            case 3:list.insertend();
            break;
            case 4:list.display();
            break;
            case 5:break;
            case 6:list.search();
            break;
            case 7:list.deletbegin();
            break;
            case 8:list.deleteatposition();
            break;
            case 9:list.deleteend();
            break;
            default:cout<<"\nEnter a valide choice.";

            
        }
    }while(ch!=5);
    return 0;
    
}