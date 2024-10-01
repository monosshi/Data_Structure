#include<iostream>
using namespace std;

void towero(int n,char BEG , char AUX,char END)
{

    if(n==1)
    {
        cout<<BEG<<"->"<<END<<endl;
        return;
    }
    towero(n-1,BEG,END,AUX);
    towero(1,BEG,AUX,END);
    towero(n-1,AUX,BEG,END);
}
int main()
{
    int n;
    cin>>n;

    towero(n,'A','B','C');
    return 0;
}