#include<iostream>

using namespace std;

struct node
{
    int data;
    node*forward;
    node*back;

};

node*first=NULL;
node*last=NULL;

node*create_node(int value)
{
    node*newnode = new node;
    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }

    newnode->data=value;
    newnode->forward = NULL;

    return newnode;

}

void insert_at_ending(node*NEW)
{
    if(first==NULL && last==NULL)
    {
        first=NEW;
        last=NEW;
    }

    else
    {
        node*ptr = first;
        

        while(ptr->forward != NULL)
        {
            ptr=ptr->forward;
        }

        ptr->forward =NEW;
        NEW->back= ptr;
        NEW->forward= NULL;
    }
}

void delete_from_beg()
{
    if(first==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

   // node*ptr= first;
    
    first=first->forward;
    first->forward->back= NULL;
}

void delete_from_end()
{
     if(first==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    node*ptr = first;
    node*track;

    while(ptr->forward != NULL)
    {
        track = ptr;
        ptr=ptr->forward;
    }
    track->forward = NULL;
}

void delete_at_any_pos(int value)
{
     if(first==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    node*ptr = first;

   // while(ptr->forward!= value)
   // {
        
    //}
    

}

void traverse()
{
    node*ptr= first;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->forward;
    }
    cout<<endl;
}


int main()
{
    int n,item;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        node*NEW=create_node(item);
        insert_at_ending(NEW);
    }

    traverse();

    delete_from_beg();
    traverse();

    delete_from_end();
    traverse();

    int i;
    cin>>i;
    node*newnode = create_node(i);
    //delete_at_any_pos(newnode);
    return 0;
}