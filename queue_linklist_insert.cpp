#include<iostream>

using namespace std;

struct queue
{
    char ch;
    queue*next;

};

queue*front=NULL;
queue*rear=NULL;

void push(char cha)
{
    queue*qnode = new queue;

    if(qnode==NULL)
    {
        cout<<"overflow"<<endl;

        exit(1);
    }

    qnode->ch=cha;
    qnode->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=qnode;
        rear=qnode;
    }
    else
    {
        rear->next=qnode;
        rear=qnode;
    }
}

void pop()
{
    if(front==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    front=front->next;
}

void qtraverse()
{
    queue*ptr=front;

    while(ptr!=NULL)
    {
        cout<<ptr->ch<<" ";
        ptr=ptr->next;
    }

    cout<<endl;
}


int main()
{
    push('A');
    push('B');
    push('C');

    qtraverse();

    pop();

    qtraverse();
    return 0;
}

/*#include<iostream>
using namespace std;

struct queue
{
    char ch;
    queue*next;

};

queue*front=NULL;
queue*rear=NULL;

void push(char cha)
{
    queue*qnode=new queue;

    if(qnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    qnode->ch=cha;
    qnode->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=qnode;
        rear=qnode;
    }
    else{
    rear->next=qnode;
    rear=qnode;
}

}

void pop()
{
    if(front==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }
    front=front->next;
}

void Qtraverse()
{
    queue*ptr=front;

    while(ptr!=NULL)
    {
        cout<<ptr->ch<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
    push('A');
    push('B');
    push('C');
    push('D');

    Qtraverse();

    pop();
    pop();
    Qtraverse();
    return 0;
}*/