
#include<iostream>
using namespace std;
#define N 5

char queue[N];

int front =-1;
int rear=-1;

void push(char ch)
{
    if(front==0 && rear==N-1||front==rear+1)
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

void Qtraverse()
{
    for(int i = front;;)
    {
        cout<<queue[i]<<" ";

        if(i==rear)
        {
            break;
        }

        if(i==N-1)
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
    push('A');
    push('B');

    Qtraverse();
    return 0;
}