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

   if(root==NULL){
       return;
   }
  stack <node*> s;
   node*curr=root;
  while(!s.empty()||curr!=NULL)
  {
      while (curr!=NULL)
      {
          cout<<root->data;
          if(curr->right){
              s.push(curr->right);
          }
          curr=curr->left;
      }
      if(s.empty()==false){
          curr=s.top();
          s.pop();
      }
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