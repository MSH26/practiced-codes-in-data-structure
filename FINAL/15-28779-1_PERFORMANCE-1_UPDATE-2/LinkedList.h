#include<iostream>
using namespace std;

struct node{
    int item;
    node* next;

    node(int item){
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
    void insertBack(int item){
        node* n = new node(item);
        if(head==NULL){
            head = n;
        }
        else{
            node* tmp = head;
            for(int i=1; i<count; i++){
                tmp = tmp->next;
            }
            tmp->next = n;
        }
        count++;
    }
    void removeFront(){
        head = head->next;

        count--;
    }
    int getValueAt(int position){
        node* t;
        int c;

        t = head;
        c=1;
        while(c<position){
            t = t->next;
            c++;
        }
        return t->item;
    }
    int size(){
        return count;
    }
};
