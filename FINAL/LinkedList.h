#include<iostream>
using namespace std;

struct node{
    char item;
    node* next;

    node(char item){
        this->item = item;
        this->next = NULL;
    }
};

class LinkedList{
    node* head;
    int count;
public:
    LinkedList(){
        head=NULL;
        count=0;
    }
    void insertFront(char item){
        node* n = new node(item);
        if(head==NULL){
            head = n;
        }
        else{
            n->next = head;
            head = n;
        }
        count++;
    }
    void removeFront(){
        head = head->next;
        count--;
    }
    char getValueAt(int position){
        node* t;
        int c;
        t = head;
        c=1;
        while(c<position){
            t = t->next;
            if(t==NULL){
                return 1;
            }
            c++;
        }
        return t->item;
    }
    int size(){
        return count;
    }
};
