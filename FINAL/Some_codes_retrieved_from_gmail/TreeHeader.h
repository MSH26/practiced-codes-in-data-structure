#include<iostream>
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

class tree_list{
    node* root;
public:
    tree_list(){
        root = NULL;
    }

    node* getNode(node* tmp , int parentNode){
        if(tmp->item == parentNode){
            return tmp;
        }
        else{
            if(tmp->left != NULL){
                getNode(tmp->left , parentNode);
            }
            if(tmp->right != NULL){
                getNode(tmp->right , parentNode);
            }
        }
}

    void insert(int childNode,int parentNode,char posNode){
         node* n = new node(childNode);
         if(root==NULL){
            root = n;
         }
         else{
            node* tmp = getNode(root , parentNode);
            if(posNode=='L'){
                tmp->left = n;
            }
            else if(posNode=='R'){
                tmp->right = n;
            }
         }
    }

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

    void display(){
        cout<<"The preorder of the tree "<<endl;
        preorder(root);
        cout<<endl;
        cout<<"The postorder of the tree "<<endl;
        postorder(root);
        cout<<endl;
        cout<<"The inderorder of the tree "<<endl;
        inorder(root);
    }

};
