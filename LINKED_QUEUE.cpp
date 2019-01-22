#include<iostream>
#include<cstdlib>

using std::cout;
using std::endl;

struct node{
     int items;
     node* next;
};
class Linked_queue{
     node* head;
     int _rear;
     int _front;
 public:
     Linked_queue(){
         head = NULL;
         _rear = 0;
         _front = 0;
     }

     node* createNode(){
        node* n = new node;
        return n;
     }

     node* getNodeAt(int position){
        node* tmp = head;
        for(int i=1;i<position;i++){
            tmp = tmp->next;
        }
        return tmp;
     }

     void getNodeAt(int position,node* tmp){
        node* P = head;
        for(int i=1;i<(position-1);i++){
            P = P->next;
        }
        P->next = tmp;
     }
     void append(int item){
        node* tmp;
        tmp = createNode();
        tmp->items = item;
        tmp->next = getNodeAt(++_rear-_front);
        if(_rear==1){
            head = tmp;
        }
        else if(_rear>1){
            getNodeAt(_rear-_front,tmp);
        }
     }

     void serve(){
         if(empty()==true){
            cout<<"The queue is empty"<<endl;
         }
         else{
            _front++;
            head = head->next;
         }
     }

     bool empty(){
         if(_rear==_front){
            return true;
         }
         return false;
     }

      int front(){
          if(empty()==true){
             cout<<"The queue is empty"<<endl;
             exit(0);
          }
          else{
             int x = head->items;
             return x;
          }
       }

      int back(){
          if(empty()==true){
             cout<<"The queue is empty"<<endl;
             exit(0);
          }
          else{
             node* tmp = head;
             for(int i=1;i<(_rear-_front);i++){
                tmp = tmp->next;
             }
             int x = tmp->items;
             return x;
          }
      }

      void size(){
          cout<<"Present size of the queue is "<<_rear-_front<<""<<endl;
      }
};

int main(){
    Linked_queue qu;

    qu.append(10);
    qu.append(20);
    qu.append(30);
    qu.append(40);
    qu.append(50);

   // cout<<qu.back()<<endl;
   // cout<<qu.front()<<endl;
    qu.serve();
    cout<<qu.front()<<endl;
    qu.serve();
    cout<<qu.front()<<endl;
    qu.serve();
    cout<<qu.front()<<endl;

    cout<<qu.back()<<endl;
    qu.append(70);
    cout<<qu.back()<<endl;
    qu.append(80);
    cout<<qu.back()<<endl;
    qu.serve();
    cout<<qu.front()<<endl;
    qu.size();

    return 0;
}
