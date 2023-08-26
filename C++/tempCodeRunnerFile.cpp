
            cout<<temp->data<<" , ";
            temp=temp->next;
        }
    }
    cout<<"\n"<<endl;
    for(int i=0;i<=counter;i++){
        cout<<"-----";
    }
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