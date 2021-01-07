#include<iostream>
#include<stack>
using namespace std;

class node {
    
    public:
    int data;
    node* left , * right;

    node(int data){

        this->data=data;
        left=right=NULL;

    }
};

void preorder(node* root){

  stack <node*> s;

  while(1)
  {
      while (root)
      {
          cout<<root->data;
          s.push(root->data);
          root=root->left;
      }
      if(s.empty()){
          break;
      }
      root=s.pop();
      root=root->right;
  }
  



}

int main(){

    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    preorder(root);
}