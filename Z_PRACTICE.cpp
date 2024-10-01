#include<bits/stdc++.h>


using namespace std;

#define N 5

int A[N];
int index = 0;

void insert(int item)
{

    if(index==N)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    A[index] =item;
    int parent = index/2;
    int child = index;

    while(child!=0)
    {
        if(A[child]>A[parent])
        {
            swap(A[child],A[parent]);
        }

        child=parent;
        parent=child/2;
    }
    index++;
}

int main()
{
    int n,item;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>item;
        insert(item);
    }

    for(int i=0;i<index;i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl;
    return 0;
}