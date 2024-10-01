#include<iostream>
#include<algorithm>

using namespace std;

struct employee
{
    char name[20];
    char address[20];
    int salary;

};



bool compare_salary(employee e1,employee e2)
{
    if(e1.salary>e2.salary)
    {
        return true;
    }
    else{
        return false;
    }
}

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

    for(int i =0;i<n;i++)
    {
        getchar();
        cin.get(info[i].name,20);
        getchar();
        cin.get(info[i].address,20);
        cin>>info[i].salary;
    }

    display(n,info);

    sort(info,info+n,compare_salary);

    display(n,info);

    return 0;

}