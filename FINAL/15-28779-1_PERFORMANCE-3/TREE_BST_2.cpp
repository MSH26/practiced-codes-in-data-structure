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

class BSTtree{
    node* root;
    int count;
public:
    BSTtree(){
        root = NULL;
    }
    void insert(int item){
        node* n = new node(item);
        if(root==NULL){
            root = n;
        }
        else{
            node* tmp = root;
            while(item){

                if(tmp->item > item){
                    if(tmp->left == NULL){
                        tmp->left = n;
                        break;
                    }
                    else{
                        tmp = tmp->left;
                    }
                }
                else{
                    if(tmp->right == NULL){
                        tmp->right = n;
                        break;
                    }
                    else{
                        tmp = tmp->right;
                    }
                }
            }
        }
    }

    node* getNode(int item){
         node* tmp = root;
         while(item){
            if(tmp->item > item){
                if(tmp->left!=NULL){
                    if(tmp->left->item == item){
                        return tmp;
                    }
                    else{
                        tmp = tmp->left;
                    }
                }
                else{
                    return NULL;
                }
            }
            else if(tmp->item < item){
                if(tmp->right!=NULL){
                    if(tmp->right->item == item){
                        return tmp;
                    }
                    else{
                        tmp = tmp->right;
                    }
                }
                else{
                    return NULL;
                }
            }
         }
    }

    void remove(int item){
         node *tmp , *tmp2;
         int x;
         tmp = getNode(item);
         if(tmp->left->item == item){
             if(tmp->left->right != NULL){
                tmp2 = tmp->left->right;
                x = tmp2->item;
                while(tmp2->left != NULL){
                    x = tmp2->left->item;
                    tmp2 = tmp2->left;
                }
                tmp2->left = tmp->left->left;
                tmp2->right = tmp->left->right;
                tmp->left = tmp2;
            }
            else{
                tmp->left = tmp->left->left;
            }
        }
        else if(tmp->right->item == item){
            if(tmp->right->right != NULL){
                tmp2 = tmp->right->right;
                x = tmp2->item;
                while(tmp2->left != NULL){
                    x = tmp2->left->item;
                    tmp2 = tmp2->left;
                }
                tmp2->left = tmp->right->left;
                tmp2->right = tmp->right->right;
                tmp->right = tmp2;
            }
            else{
                tmp->right = tmp->right->left;
            }
        }

    }

    void display(node* tmp){
       if(tmp->left != NULL){
            display(tmp->left);
        }

        cout<<tmp->item<<" ";

        if(tmp->right != NULL){
            display(tmp->right);
        }
    }

    node* Root(){
       return root;
    }
};

int main(){
    BSTtree tree;

    int numberOfNode , item;

    cin>>numberOfNode;

    for(int i=0;i<numberOfNode;i++){
        cin>>item;
        tree.insert(item);
    }

    cout<<"OUTPUT : "<<endl;
    tree.display(tree.Root());
    cout<<endl<<"INSERT AN ITEM TO REMOVE FROM TREE : ";
    cin>>item;
    tree.remove(item);
    cout<<"AFTER REMOVE ITEM FROM TREE,THE OUTPUT  : "<<endl;
    tree.display(tree.Root());

    return 0;
}
