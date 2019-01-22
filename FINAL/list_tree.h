#include<iostream>
using namespace std;

//template<class T>

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

class list{
    node* root;
    int count;
public:
    list(){
        root = NULL;
        count = 0;
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
        count++;
    }

    bool search(int item){
        node* search = root;
        if(search->item == item){
            return true;
        }
        else if(search->item != item){
            while(item){
                if(search->item > item){
                    if(search->left->item == item){
                        return true;
                    }
                    else{
                        search = search->left;
                    }
                }
                else if(search->item < item){
                    if(search->right->item == item){
                        return true;
                    }
                    else{
                        search = search->right;
                    }
                }
                else{
                    return false;
                }
            }
        }
    }

    int size(){
        return count;
    }
};
