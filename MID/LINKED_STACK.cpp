#include<iostream>
#include<cstdlib>

using std::cout;
using std::endl;

struct node{
     int items;
     node* next;
};

class Linked_stack{
     node* head;
     int top;
 public:
    Linked_stack(){
        head = NULL;
        top = 0;
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

    void push(int item){
        node* tmp;
        tmp = createNode();
        tmp->items = item;
        tmp->next = getNodeAt(++top);
        if(top==1){
            head = tmp;
        }
        else if(top>1){
            getNodeAt(top,tmp);
        }
    }

    void pop(){
        if(stackempty()==true){
            cout<<"The stack is empty"<<endl;
        }
        else {
            if(top==1){
                head = NULL;
                top--;
            }
            else{
                getNodeAt(--top)->next = NULL;
            }
        }
    }

    int Top(){
        if(stackempty()==true){
            cout<<"The stack is empty"<<endl;
            exit(0);
        }
        else{
            node* tmp = head;
            for(int i=1;i<(top);i++){
                tmp = tmp->next;
            }
            int x = tmp->items;
            return x;
        }
    }

    bool stackempty(){
        if(top==0){
            return true;
        }
        return false;
    }

    void size(){
        cout<<"Present the size of the stack is "<<top<<""<<endl;
    }
};

int main(){
    Linked_stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.size();

    return 0;
}
