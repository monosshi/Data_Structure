//INSERT AT BEGINNING END AND ANY POSITION

#include<iostream>
using namespace std;


struct node
{
    int data;
    node*next;
};

node*start = NULL;


node*create_node(int value)               //NODE CREATION
{
    node*newnode = new node;
    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }

    newnode->data=value;
    newnode->next=NULL;

    return newnode;
}

void insert_at_beg(node*NEW)
{
    NEW->next=start;                          // INSERT AT BEGINNING
    start=NEW;

}
 
void insert_at_end(node*NEW)                 //INSERT AT ENDING
{
    if(start==NULL)
    {
        insert_at_beg(NEW);
    }

    else
    {
        node*ptr = start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }

        ptr->next=NEW;
        NEW->next=NULL;

    }

}

void insert_after_given_position(int value ,node*NEW)
{
    node*ptr = start;
    while(ptr->data!=value)
    {
        ptr=ptr->next;
    }
    NEW->next=ptr->next;
    ptr->next=NEW;

}

void traverse()                              //TRAVERSE
{
    node*ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    int n,item;
    cin>>n;
    for(int i=0 ;i<n;i++)
    {
        cin>>item;
        node*NEW=create_node(item);

       // insert_at_beg(NEW);

        insert_at_end(NEW);
    }
    
    int i;
    cin>>i;
    node*newnode=create_node(i);
    insert_after_given_position(30,newnode);
    traverse();
    return 0;
}