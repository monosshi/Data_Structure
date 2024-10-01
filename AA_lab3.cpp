#include<bits/stdc++.h>
using namespace std;

void traverse(int n ,int arr[])
{
    int k=0;

    while(k<n)
    {
        cout<<arr[k]<<" ";
        k++;
    }

    cout<<endl;
}

int linear_search(int n,int arr[],int item)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            return i;
        }
    }
    return -1;
}

void update(int n, int arr[], int item1 , int item2)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item1)
        {
            arr[i]=item2;
        }
    }
}

void insert(int n,int arr[],int loc,int item)
{
    int arr2[n+1];

    for(int i=0;i<n;i++)
    {
        arr2[i+1]=arr2[i];
    }
    arr2[loc]=item;

    traverse(n+1,arr2);
}

void delt(int n,int arr[],int loc)
{
    int arr2[n-1];

    for(int i=0;i<n-1;i++)
    {
        if(i<loc)
        {
            arr2[i]=arr[i];
        }

        else
        {
            arr2[i]=arr[i]+1;
        }

        traverse(n-1,arr2);
    }

}

int main()
{

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int loc;
    cin>>loc;

    delt(n,arr,loc);

    return 0;
}