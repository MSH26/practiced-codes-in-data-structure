#include<iostream>
#include<queue>
#include<stack>
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

void DFS(node* tmp){
     stack <node*> S;
     S.push(tmp);
     while(!S.empty()){
        cout<<S.top()->item<<" ";
        node* nodeToExpand = S.top();
        S.pop();
        if(nodeToExpand->left!=NULL){
            S.push(nodeToExpand->left);
        }
        if(nodeToExpand->right!=NULL){
            S.push(nodeToExpand->right);
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

    cout<<endl<<"BREATH FIRST SEARCH : ";

    BFS(root);

    cout<<endl<<endl<<"DEPTH FIRST SEARCH : ";

    DFS(root);

    cout<<endl;

    return 0;
}
