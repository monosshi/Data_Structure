#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,p;
    cin>>m>>n>>p;

    int a[m][p];       //m =row,p=col
    int b[p][n];       //p = row,n =col

    for(int i =0;i<m;i++){
        for(int j =0 ;j<p;j++)
        {
            cin>>a[i][j];
        }
    }

     for(int i =0;i<p;i++){
        for(int j =0 ;j<n;j++)
        {
            cin>>b[i][j];
        }
    }

    int c[m][n];

    for(int i = 0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;

            for(int k =0;k<p;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);         //c[i][j]=c[i][j]+(a[i][k]*b[k][j])
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}