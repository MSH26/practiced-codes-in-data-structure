#include<iostream>

using std::cout;
using std::endl;

struct node{
     int items;
     node* next;
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

      void getNodeAt(int position,node* tmp){
           node* P = head;
           for(int i=1;i<(position-1);i++){
               P = P->next;
           }
           P->next = tmp;
      }

      void insertFront(int item){
            node* tmp;
            tmp = createNode();
            tmp->items = item;
            tmp->next = getNodeAt(++count);
            if(count==1){
               head = tmp;
            }
            else if(count>1){
               getNodeAt(count,tmp);
            }
        }

      void insertBack(int item){
           node* tmp;
           tmp = createNode();
           tmp->items = item;
           tmp->next = head;
           head = tmp;
           count++;
      }

      bool empty(){
           if(count==0){
              return true;
           }
           return false;
      }

      void insert(int position,int item){
           if(getValueAt(position)==true){
             cout<<"Invalid position"<<endl;
           }
           else{
             node* tmp;
             tmp = createNode();
             tmp->items = item;
             tmp->next = getNodeAt(position);
             getNodeAt(position,tmp);
             count++;
            }
      }

      void deleteFront(){
          if(empty()==true){
             cout<<"The list is empty"<<endl;
          }
          else {
             if(count==1){
                head = NULL;
                count--;
             }
             else {
                getNodeAt(--count)->next = getNodeAt(count)->next->next;
             }
          }
      }

      void deleteBack(){
          head = head->next;
          count--;
      }

      void Delete(int position){
          if(empty()==true){
             cout<<"The list is empty"<<endl;
          }
          else {
            if(position==1){
               head = NULL;
               count--;
            }
            else {
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
          node* p = head;
          cout<<"AFTER ALL THE OPERATION THE VALUES OF LIST ARE :\n";
          while(p->next!=NULL){
             cout<<p->items<<endl;
             p=p->next;
          }
          cout<<p->items<<endl;
      }
};

int main(){
    linked_list tmp;

    tmp.insertFront(10);
    tmp.insertFront(20);
    tmp.insertFront(30);
    tmp.insertFront(40);
    tmp.insertBack(90);
    tmp.insertFront(70);
    tmp.insert(2,80);
    tmp.deleteFront();
    tmp.deleteBack();
    tmp.Delete(3);
    tmp.insert(4,100);
    tmp.display();
    tmp.size();

    return 0;
}
