#include<bits/stdc++.h>
using namespace std;

 struct node
    {
        int data;
        node*left;
        node*right;
    };

    node*root = NULL;

    node*create_node(int data)
    {
        node*newnode = new node;
        newnode->data=data;
        newnode->left=NULL;
        newnode->right=NULL;

        return newnode;
    }

    void add_left_child(node*parent,node*child)
    {
        parent->left=child;

    }

    void add_right_child(node*parent,node*child)
    {
        parent->right=child;
        
    }

    node*create_tree()
    {
    node*two=create_node(2) ;
    node*seven=create_node(7) ;
    node*nine=create_node(9) ;

    add_left_child(two,seven);
    add_right_child(two,nine);

    node*one=create_node(1) ;
    node*six=create_node(6) ;

    add_left_child(seven,one);
    add_right_child(seven,six);

    node*five=create_node(5) ;
    node*ten=create_node(10) ;

    add_left_child(six,five);
    add_right_child(six,ten);

    node*eight=create_node(8) ;
    add_right_child(nine,eight);

    node*three=create_node(3) ;
    node*four=create_node(4) ;

    add_left_child(eight,three);
    add_right_child(eight,four);


        return two;

    }

    void pre_order(node*node)
{
    cout<<node->data<<" ";

    if(node->left!=NULL)
    {
        pre_order(node->left);
    }

    if(node->right!=NULL)
    {
        pre_order(node->right);
    }
}

void in_order(node*node)
{
    

    if(node->left!=NULL)
    {
        pre_order(node->left);
    }

    cout<<node->data<<" ";

    if(node->right!=NULL)
    {
        pre_order(node->right);
    }
}

void post_order(node*node)
{
   
    if(node->left!=NULL)
    {
        pre_order(node->left);
    }

    if(node->right!=NULL)
    {
        pre_order(node->right);
    }

    cout<<node->data<<" ";
}

    

int main()
{
    node*root = create_tree();

    pre_order(root);
    cout<<endl;

    in_order(root);
    cout<<endl;

    post_order(root);
    cout<<endl;

   

    return 0;
}