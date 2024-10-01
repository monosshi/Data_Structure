#include<bits/stdc++.h>
using namespace std;



int main()
{

    int n;
    cin>>n;

    int level=floor(log2(n)+1);
    int tree[2^level];

    int node,char ch;

    for(int i = 1 ;i<=n;i++)
    {
        cin>>node;
        if(i==1)
        {
            tree[0]=node;
        }
        else
        {
            cin>>ch;
            if(ch=='r')
            {
                tree[2^node];
            }
            else if(ch=='l')
            {
                tree[2^node+1];
            }

        }

       
        

    }


    return 0;
}