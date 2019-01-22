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

class tree_list{
    node* root;
public:
    tree_list(){
        root = NULL;
    }
    void insert(int childNode,int parentNode,char posNode){

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

};
