#include<iostream>
#include<queue>
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

void BFS(node* tmp){
     queue <node*> Q;
     Q.push(tmp);
     while(!Q.empty()){
        cout<<Q.front()->item<<" ";
        node* nodeToExpand = Q.front();
        Q.pop();
        if(nodeToExpand->left!=NULL){
            Q.push(nodeToExpand->left);
        }
        if(nodeToExpand->right!=NULL){
            Q.push(nodeToExpand->right);
        }
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

    BFS(root);

    return 0;
}
