#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int A[100]={22,12,13,15,10,17} ,x,i,j;

    cout<<"ENTER THE POSITION TO DELETE : ";
    cin>>x;

    for(i=0;i<=6;i++){
       if(i==(x-1)){
           for(j=i+1;j<=5;j++,i++){
               A[i]=A[j];
               cout<<A[i]<<" ";
           }
         return 0;
       }

       cout<<A[i]<<" ";
    }

    return 0;
}
