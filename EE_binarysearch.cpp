#include<iostream>
#include<math.h>

using namespace std;

int binary_search(int b,int e , int item,int arr[]);

int main()
{
    int n,b=0,e,item;
    cin>>n;
    e=n-1;
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter item = ";

    cin>>item;

    int index = binary_search(b,e,item,arr);

    if(index==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found at "<<index<<" position"<<endl;
    }

    return 0;
}

int binary_search(int b,int e , int item,int arr[])
{
    int mid = floor((b+e)/2);

    if(b>e)
    {
        return -1;
    }

    if(arr[mid]==item)
    {
        return mid;
    }

    if(arr[mid]<item)
    {
        b=mid+1;
    }
    else{

        e=mid-1;

    }
    int index = binary_search(b,e,item,arr);
    return index;
    
}