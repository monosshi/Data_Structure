#include<iostream>
using namespace std;

struct bstnode
{
    int data;
    bstnode*right;
    bstnode*left;

};

bstnode*create_node(int value)
{
    bstnode*newnode = new bstnode;
    newnode->data= value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

bstnode*insert(bstnode*root,int data)
{
    if(root==NULL)
    {
        root=create_node(data);
    }

    else if(root->data>data)
    {
        root->left = insert(root->left,data);
    }

    else
    {
        root->right = insert(root->right,data);
    }
    return root;
}

bool search(bstnode*root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    
    else if(root->data>data)
    {
        return search(root->left,data);
    }

    else if(root->data<data)
    {
         return search(root->right,data);

    }
return root;

}

bstnode*right= NULL;
bstnode*left=NULL;

int main()
{
    bstnode*root= NULL;
    int n;
    cin>>n;

    int element;
    for(int i =0;i<n;i++)
    {
        cin>>element;
        root= insert(root,element);
    }

    int item;
    cout<<"enter item to be searched = ";

    cin>>item;

    if(search(root,item)==true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }


   
    return 0;
}