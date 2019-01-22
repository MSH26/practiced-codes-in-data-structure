#include<iostream>
#include<cstdlib>

using std::cout;
using std::endl;

const int SIZE=100;

class stack{
      int items[SIZE];
      int top;

  public:
      void initialize(){
           top=-1;
      }

      void push(int item){
           if(stackfull()==false){
              top++;
              items[top]= item;
            }
            else
                cout<<"STACK OVERFLOW"<<endl;

      }

      void pop(){
           if(stackempty()==false){
               top--;
            }
           else
               cout<<"STACK EMPTY"<<endl;

      }

      int Top(){
          if(stackempty()==true){
            cout<<"STACK EMPTY"<<endl;
            exit(0);
          }
          else
             return items[top];
      }

      bool stackfull(){
          if(top==(SIZE-1)){
             return true;
          }
          return false;
      }

      bool stackempty(){
          if(top==-1){
            return true;
          }
          return false;
      }

      int size(){
           return SIZE;
      }
};

int main(){
    stack  st;

    st.initialize();
    cout<<"THE CURRENT SIZE OF STACK IS "<<st.size()<<endl;

    st.push(10);
    st.push(20);
    st.push(40);

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;

    return 0;
}
