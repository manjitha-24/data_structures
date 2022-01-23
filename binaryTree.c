#include <iostream>

using namespace std;
struct node{
    int data;
    struct node*left,*right;
}*root=NULL,*p=NULL;

void insertion(){
    int val,c=0;
    while(c<7){
        if(root == NULL){
            root = new node;
            cout<<"enter the value of root node"<<endl;
            cin>>root->data;
            root->left = NULL;
           root->right = NULL;
        }
        else{
            p = root;
            cout<<"enter the value of node"<<endl;
            cin>>val;
            while(true){
                if(val < p->data){
                    if(p->left = NULL){
                        p->left = new node;
                        p = p->left;
                        p->data = val;
                        p->left = NULL;
                        p->right = NULL;
                        cout<<"value entered to left is "<<val<<endl;
                        break;
                    }
                    else if(p->left != NULL){
                        p = p->left;
                    }
                    
                }
                else if(val > p->data){
                    if(p->right == NULL){
                        p->right = new node;
                        p = p->right;
                        p->data = val;
                        p->left = NULL;
                        p->right = NULL;
                        cout<<"value entered to right is "<< val <<endl;
                        break;
                    }
                    else if(p->right != NULL){
                         p = p->right;
                    }
                }
            }
        }}
      c++;  
    
}

void inorder(node *p){
    while(p!=NULL){
        inorder(p->left);
        cout<<p->data;
        inorder(p->right);
    }
}

int main(){
    insertion();
    inorder(root);
  
}
