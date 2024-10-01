//QUEUE ARRAY

/*#include<iostream>
using namespace std;

#define N 10

char queue[N];
int front=-1;
int rear=-1;

void push(char ch)
{
    if(front==0 && rear==N-1 || front==rear+1)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    if(front==-1 && rear==-1)
    {
        front++;
        rear++;
    }

    else if(rear==N-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }

    queue[rear]=ch;
}

void pop()
{
    if(front==-1)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    if(front==rear)
    {
        front=-1;
        rear=-1;
    }

    else if(front==N-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
}

void QTRAVERSE()
{
    for(int i=front;;)
    {
        cout<<queue[i]<<" ";

        if(i==rear)
        {
            break;
        }

        else if(i==N-1)
        {
            i=0;
        }
        else
        {
            i++;
        }
    }

    cout<<endl;

    
}
int main()
{
    push('M');
    push('O');
    push('N');
    push('O');
    push('S');
    push('S');
    push('H');
    push('I');

    QTRAVERSE();

    pop();

    QTRAVERSE();
    return 0;
}*/

#include<iostream>
using namespace std;

struct queue
{
    char data;
    queue*next;

};

queue*front=NULL;
queue*rear=NULL;

void push(char ch)
{
    queue*qnode = new queue;

    if(qnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }

    qnode->data=ch;
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

void QTRAVERSE()
{
    queue*ptr=front;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    push('M');
    push('O');
    push('N');
    push('O');
    push('S');
    push('S');
    push('H');
    push('I');

    
    QTRAVERSE();

    pop();
    QTRAVERSE();
    return 0;
}