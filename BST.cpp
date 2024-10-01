#include<iostream>

using namespace std;

struct  BstNode
{
    int data;
    BstNode*left;
    BstNode*right;
} ;

BstNode*create_node(int data)
{
    BstNode*newnode=new BstNode();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

BstNode*Insert(BstNode*root,int data)
{
    if(root==NULL)
    {
        root=create_node(data);
    }

    else if (root->data>data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }

    return root;
}

bool Search(BstNode*root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        return true;
    }
    else
    {
        return Search(root->right,data);
    }
}
int main()
/*{
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        root=Insert(root,element);
    }*/
    
    BstNode*root=NULL;

    root=Insert(root,5) ;
    root=Insert(root,10) ;
    root=Insert(root,20) ;
    root=Insert(root,25) ;
    root=Insert(root,8) ;
    root=Insert(root,12) ;

    int number;
    cout<<"Enter number be search\n";
    cin>>number;

    if(Search(root,number)==true)cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;





    return 0;
}