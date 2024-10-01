#include<iostream> 

using namespace std; //using declaration

struct  BstNode //creating structure
{
    int data; 
    BstNode*left;
    BstNode*right; 
} ;

BstNode*create_node(int data)  
{
    BstNode*newnode=new BstNode;   
    newnode->data=data;              
    newnode->left=NULL;             
    newnode->right=NULL;           
 
    return newnode;       //return newnode
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

void inoder(BstNode*root)  
{

    

    if(root->left!=NULL)   
    {
        inoder(root->left); 
    }
 
    cout<<root->data<<" ";   

    if(root->right!=NULL) 
    {
        inoder(root->right);
    }

}

int main()  //main function
{
     BstNode*root=NULL; 

    int n,element;  

    cin>>n;

    for(int i=0;i<n;i++)   
    {
        cin>>element;  

        root=Insert(root,element);  
    }

    inoder(root); 

    return 0; 

}