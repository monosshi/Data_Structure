#include<iostream>
using namespace std;

struct node
{
    int data;
    node*left;
    node*right;

};

node*left=NULL;
node*right =NULL;
node*root=NULL;

node*create_node(int data)
{
    node*newnode = new node;

    newnode->data=data;
    newnode->left=NULL;
    newnode->right= NULL;

    return newnode;

}

void add_to_left(node*parent,node*child)
{
    parent->left=child;
}

void add_to_right(node*parent,node*child)
{
    parent->right=child;
}

node*create_tree()
{
    node*two=create_node(2);
    node*seven= create_node(7);
    node*nine= create_node(9);

    add_to_left(two,seven);
    add_to_right(two,nine);

    return two;

}

void pre_oder(node*node)
{
    cout<<node->data<<" ";

    if(node->left!=NULL)
    {
        pre_oder(node->left);
    }

    if(node->right!=NULL)
    {
        pre_oder(node->right);
    }

}

void in_oder(node*node)
{
    

    if(node->left!=NULL)
    {
        in_oder(node->left);
    }

    cout<<node->data<<" ";

    if(node->right!=NULL)
    {
        in_oder(node->right);
    }
    
}

void post_oder(node*node)
{
    

    if(node->left!=NULL)
    {
        post_oder(node->left);
    }

    if(node->right!=NULL)
    {
        post_oder(node->right);
    }

    cout<<node->data<<" ";
    
}

int main()
{

    node*root= create_tree();

    pre_oder(root);
    cout<<endl;
    in_oder(root);
    cout<<endl;
    post_oder(root);
    cout<<endl;
    return 0;
}