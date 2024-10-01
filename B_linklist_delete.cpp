// DELETE FROM END BEG AND ANY POS


#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;

};

node*start = NULL;
int p =0;


node*create_node(int value)
{
    node*newnode = new node;

    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }

    newnode->data = value;
    newnode->next= NULL;

    return newnode;
}

void insert_at_beg(node*NEW)
{
    NEW->next=start;
    start = NEW;
}

void insert_at_end(node*NEW)
{
    if(start==NULL)
    {
        insert_at_beg(NEW);
    }
    else
    {
        node*ptr = start;
        while(ptr->next!= NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=NEW;
        NEW->next= NULL;
    }

}

void delete_from_beg()
{
    if(start==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }
    

    start=start->next;

}

void delete_from_end()
{
    if(start==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    node*ptr = start;
    node*save;
     

    while(ptr->next!= NULL)
    {
        save = ptr;
        ptr=ptr->next;
    }

    save->next= NULL;
}

void  delete_at_any_given_pos(int position)
{
     if(start==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    node*ptr = start;
    node*save;

    while(ptr->next!=NULL)
    {
        save=ptr;
        ptr=ptr->next;
        p++;
        if(p==position)
        {
            save->next=ptr->next;
            
        }
    } 

}

void traverse()
{
    node*ptr= start;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
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
        node*NEW =create_node(item);
        insert_at_end(NEW);
    }

    traverse();

   // delete_from_beg();

   // traverse();

   // delete_from_end();

   // traverse();

    int pos;
    cin>>pos;

    

    delete_at_any_given_pos(pos);

    traverse();

    return 0;
}