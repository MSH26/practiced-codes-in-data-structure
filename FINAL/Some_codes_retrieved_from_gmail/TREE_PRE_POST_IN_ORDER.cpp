#include<iostream>
//#include<queue>
using namespace std;

struct node{
    int item;
    node* left;
    node* right;

    node(int item){
        this->item = item;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(node* tmp){

     cout<<tmp->item<<" ";

     if(tmp->left != NULL){
        preorder(tmp->left);
     }
     if(tmp->right != NULL){
        preorder(tmp->right);
     }
}

void postorder(node* tmp){
     if(tmp->left != NULL){
        postorder(tmp->left);
     }
     if(tmp->right != NULL){
        postorder(tmp->right);
     }
     cout<<tmp->item<<" ";
}

void inorder(node* tmp){

     if(tmp->left != NULL){
         inorder(tmp->left);
     }

     cout<<tmp->item<<" ";

     if(tmp->right != NULL){
        inorder(tmp->right);
     }
}

int main(){
    node *n , *n1 , *root , *tmp;
    n = new node(4);
    root = n;
    tmp = root;

    n = new node(1);
    tmp->left = n;

    n1 = new node(3);
    tmp->right = n1;

    tmp = n;
    n = new node(2);
    tmp->left = n;

    n = new node(16);
    tmp->right = n;

    tmp = n1;
    n1 = new node(9);
    tmp->left = n1;

    n1 = new node(10);
    tmp->right = n1;

    preorder(root);

    cout<<endl;

    postorder(root);

    cout<<endl;

    inorder(root);

    return 0;
}
