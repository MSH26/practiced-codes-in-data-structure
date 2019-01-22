#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int A[100]={22,12,13,15,10,17} ,x,y,i,a;

    cout<<"ENTER THE POSITION TO INSERT : ";
    cin>>x;
    cout<<"ENTER THE VALUE(21) TO INSERT : ";
    cin>>y;

    for(i=0;i<=6;i++){
       if(i==(x-1)){
           for(;i<=6;i++){
               a=A[i];
               A[i]=y;
               y=a;
               cout<<A[i]<<" ";
           }
         return 0;
       }

       cout<<A[i]<<" ";
    }

    return 0;
}
