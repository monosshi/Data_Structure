#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    int BEG,END,MID,item;
    cin>>item;

    BEG=0;
    END=n-1;

    MID= floor((BEG+END)/2);

    while(BEG<=END && arr[MID]!=item)
    {
        if(arr[MID]<item)
        {
            BEG=MID+1;
        }
        else
        {
            END=MID-1;
        }

         MID= floor((BEG+END)/2);
    }
    if(BEG>END)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found at position = "<<MID<<endl;
    }
    return 0;
}
