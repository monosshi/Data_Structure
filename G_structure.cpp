/*#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
    char name[20];
    char address[20];

    int salary;
    
};

void display(int n ,employee info[])
{
    for(int i =0;i<n;i++)
    {
        cout<<info[i].name<<" "<<info[i].address<<" "<<info[i].salary<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    employee info[n];

    

    for(int i =0;i<n;i++)
    {
         getchar();
         cin.get(info[i].name,20);
         getchar();
         cin.get(info[i].address,20);
         cin>>info[i].salary;

    }

    display(n,info);

    return 0;
}*/

#include<iostream>
#include<string>
using namespace std;

struct employee
{

    char name[20];
    char address[20];
    int salary;

};

void display(int n,employee info[])
{
    for(int i=0;i<n;i++)
    {
        cout<<info[i].name<<" "<<info[i].address<<" "<<info[i].salary<<endl;
    }
}



int main()
{

    int n;
    cin>>n;

    employee info[n];

    for(int i=0;i<n;i++)
    {
        getchar();
        cin.get(info[i].name,20);

        getchar();
        cin.get(info[i].address,20);

        cin>>info[i].salary;
    }

    display(n,info);



    return 0;

}
