#include<iostream>
#include<cstdlib>

using std::cout;
using std::endl;

const int SIZE=5;

class queue{
      int items[SIZE];
      int Rear;
      int Front;
      int count;

  public:
      void initialize(){
           Rear=0;
           Front=0;
           count=0;
      }

      void append(int item){
          if(full()==true){
            cout<<"QUEUE FULL"<<endl;
          }
          else if(full()==false){
                if(Rear==SIZE){
                  Rear=0;
                }
                  items[Rear]= item;
                  //cout<<items[Rear]<<endl;
                  Rear++;
                  count++;
            }
      }

      void serve(){
           if(empty()==true){
              cout<<"QUEUE EMPTY"<<endl;
           }
           else if(empty()!=true){
                if(Front==SIZE){
                    Front=0;
                }
              Front++;
              count--;
            }
      }

      bool full(){
          if(count==SIZE){
             return true;
          }
          return false;
      }

      bool empty(){
          if(count==0){
            return true;
          }
          return false;
      }

      int front(){
          if(empty()==true){
              cout<<"QUEUE EMPTY"<<endl;
               return 0;
          }
          else
              return items[Front];
      }

      int back(){
         if(empty()==true){
              cout<<"QUEUE EMPTY"<<endl;
              return 0;
          }
          else
              return items[Rear-1];
      }

      int size(){
           return SIZE;
      }
};

int main(){
    queue  st;

    st.initialize();
    cout<<"THE CURRENT SIZE OF STACK IS "<<st.size()<<endl;

    st.append(10);
    st.append(20);
    st.append(30);
    st.append(40);
    st.append(50);

    //cout<<st.back()<<endl;
    cout<<st.front()<<endl;
    st.serve();
    cout<<st.front()<<endl;
    st.serve();
    cout<<st.front()<<endl;
    st.serve();
    cout<<st.front()<<endl;

    //cout<<st.back()<<endl;
    st.append(70);
    //cout<<st.back()<<endl;
    st.append(80);
    st.append(90);
    //cout<<st.back()<<endl;
    st.append(100);
    st.append(110);
    //cout<<st.back()<<endl;

    return 0;
}
