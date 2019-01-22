#include<iostream>

using std::cout;
using std::endl;

struct node{
     int items;
     node* next;
     node* prev;
};

class linked_list{
      node* head;
      int count;
public:
      linked_list(){
          head=NULL;
          count=0;
      }

      node* createNode(){
           node* n = new node;
           return n;
      }

      node* getNodeAt(int position){
           node* P = head;
           for(int i=1;i<position;i++){
               P = P->next;
           }
           return P;
      }

      void insertBack(int item){
            node* tmp;
            tmp = createNode();
            tmp->items = item;
            tmp->prev = getNodeAt(count);
            tmp->next = getNodeAt(++count);
            if(count==1){
               head = tmp;
            }
            else if(count>1){
               getNodeAt(count-1)->next = tmp;
            }
        }

      void insertFront(int item){
           node* tmp;
           tmp = createNode();
           tmp->items = item;
           tmp->prev = NULL;
           tmp->next = head;
           head = tmp;
           count++;
      }

      void insertAt(int position,int item){
           if(getValueAt(position)==true){
             cout<<"Invalid position"<<endl;
           }
           else{
             node* tmp;
             tmp = createNode();
             tmp->items = item;
             tmp->prev = getNodeAt(position)->prev;
             tmp->next = getNodeAt(position-1)->next;
             getNodeAt(position)->prev = tmp;
             getNodeAt(position-1)->next = tmp;
             count++;
            }
      }

      bool empty(){
           if(count==0){
              return true;
           }
           return false;
      }

      void removeBack(){
          if(empty()==true){
             cout<<"The list is empty"<<endl;
          }
          else {
             if(count==1){
                head = NULL;
                count--;
             }
             else {
                getNodeAt(--count)->prev = getNodeAt(count-1);
                getNodeAt(count)->next = getNodeAt(count)->next->next;
             }
          }
      }

      void removeFront(){
          if(empty()==true){
             cout<<"The list is empty"<<endl;
          }
          else{
             head = head->next;
             //head->prev = NULL;
             count--;
          }
      }

      void removeFrom(int position){
          if(empty()==true){
             cout<<"The list is empty"<<endl;
          }
          else {
            if(position==1){
               head = NULL;
              // head->prev = NULL;
               count--;
            }
            else {
               getNodeAt(position+1)->prev = getNodeAt(position-1);
               getNodeAt(position-1)->next = getNodeAt(position-1)->next->next;
               count--;
            }
          }
      }

      int getValueAt(int position){
          if(position>(count+1) || position<1){
            return true;
          }
          return false;
      }

      void size(){
          cout<<"Present size of the linked list is "<<count<<""<<endl;
      }
      void display(){
          if(empty()==true){
             cout<<"The list is empty"<<endl;
          }
          else{
             node* p = head;
             cout<<"AFTER ALL THE OPERATION THE VALUES OF LIST ARE :\n";
             while(p->next!=NULL){
                 cout<<p->items<<endl;
                 p=p->next;
             }
             cout<<p->items<<endl;
          }
      }
};

int main(){
    linked_list tmp;

    tmp.insertBack(10);
    tmp.insertBack(20);
    tmp.insertBack(30);
    tmp.insertBack(40);
    tmp.insertFront(90);
    tmp.insertBack(70);
    tmp.insertAt(2,80);
    tmp.removeBack();
    tmp.removeFront();
    tmp.removeFrom(3);
    tmp.insertAt(4,100);
    tmp.display();
    cout<<endl;

    tmp.size();

    return 0;
}
