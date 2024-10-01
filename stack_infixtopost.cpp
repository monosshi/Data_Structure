#include<iostream>
using namespace std;

#define MAXSTK 20

char stack[MAXSTK];

int top = -1;

void push(char item)
{
    if(top==MAXSTK)
    {
        cout<<"overflow"<<endl;
        exit(1);

    }

    top++;

    stack[top]=item;
}

void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }
    top--;
}

int main()
{
    string infix;
    getline(cin,infix);

    infix="("+infix+")";

    string exp="";

    for(int i =0;i<infix.size();i++)
    {
        if(infix[i]>='A'&& infix[i]<='Z')
        {
            exp.push_back(infix[i]);

        }
        else if(infix[i]=='(')
        {
            push(infix[i]);

        }
        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^')
        {
            if((infix[i]=='+'|| infix[i]=='-') && (stack[top]=='*'||stack[top]=='/'||stack[top]=='^'))
            {
                exp.push_back(stack[top]);
                pop();
                push(infix[i]);
            }
            else if((infix[i]=='*'||infix[i]=='/') && stack[top]=='^')
            {
                exp.push_back(stack[top]);
                pop();
                push(infix[i]);
            }
            else
            {
                push(infix[i]);

            }
        }
        else
        {
         while(stack[top]!='(')   
         {
            exp.push_back(stack[top]);
            pop();
         }

         pop();

        }

    }

    cout<<exp<<endl;

    return 0;
}