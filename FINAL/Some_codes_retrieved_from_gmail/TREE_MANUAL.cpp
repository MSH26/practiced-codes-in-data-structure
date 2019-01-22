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

    return 0;
}
