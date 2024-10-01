#include<iostream>
using namespace std;

#define MAXSTK 5

char stack[MAXSTK];

int top =-1;

void push(char ch)
{
    if(top==MAXSTK)
    {
        cout<<"overflow"<<endl;

        exit(1);
    }
    top++;
    stack[top]=ch;
    
}

void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    cout<<stack[top]<<" is deleted"<<endl;

    top--;
}

void straverse()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    push('A');
    push('B');
    push('C');
    push('D');
    push('E');

    straverse();

    pop();

    straverse();


    return 0;
}





/*#include<iostream>

using namespace std;

#define MAXSTK 5

int top =-1;

char stack[MAXSTK];

void push(char ch)
{
    if(top == MAXSTK)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }

    top++;

    stack[top]=ch;
     
}

void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }

    cout<<stack[top]<<" is deleted"<<endl;

    top--;
}

void straverse()
{
    for(int i = top;i>=0;i--)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    push('A');
    push('B');
    push('C');

    straverse();

    pop();

    straverse();

    return 0;
}*/