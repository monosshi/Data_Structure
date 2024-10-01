#include<iostream>
using namespace std;

struct stack
{
    int value;
    stack*next;

};

stack*top =NULL;

void push(int item)
{
    stack*snode= new stack;

    if(snode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    snode->value=item;
    snode->next= NULL;

    snode->next=top;
    top=snode;
}

void pop()
{
    if(top==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }
    top=top->next;
}

void straverse()
{
    stack*ptr = top;
    while(ptr!=NULL)
    {
        cout<<ptr->value<<" ";
        ptr=ptr->next;

    }
    cout<<endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    straverse();

    pop();
    straverse();
    return 0;
}