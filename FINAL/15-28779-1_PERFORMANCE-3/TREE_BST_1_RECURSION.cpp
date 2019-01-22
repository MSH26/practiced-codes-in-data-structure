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
        node* tmp2 = NULL;
        if(tmp->item == parentNode){
            return tmp;
        }
        else{
            if(tmp->left != NULL){
                tmp2 = getNode(tmp->left , parentNode);
                if(tmp2 != NULL){
                    if(tmp2->item == parentNode){
                        return tmp2;
                    }
                }
            }
            if(tmp->right != NULL){
                tmp2 = getNode(tmp->right , parentNode);
                if(tmp2 != NULL){
                    if(tmp2->item == parentNode){
                        return tmp2;
                    }
                }
            }
            else if(tmp->right == NULL || tmp2 == NULL){
                return tmp2;
            }
        }
}

    void insert(int childNode,int parentNode,char posNode){
         if(root==NULL){
            root = new node(childNode);
         }
         else{
            node* tmp = getNode(root , parentNode);
            if(posNode=='L'){
                tmp->left = new node(childNode);
            }
            else if(posNode=='R'){
                tmp->right = new node(childNode);
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

int main(){
    tree_list tree;
    int numberOfNode , parentNode , childNode;
    char posNode;

    cin>>numberOfNode;

    for(int i=0;i<numberOfNode;i++){
        cin>>childNode;
        if(i>0){
            cin>>parentNode>>posNode;
        }
        tree.insert(childNode,parentNode,posNode);
    }

    tree.display();

    return 0;
}
