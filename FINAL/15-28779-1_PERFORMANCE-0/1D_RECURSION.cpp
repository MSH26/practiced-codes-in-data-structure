#include<iostream>

using std::cout;
using std::endl;

int y = 0;

void print(int x){
     if(y!=0){
        cout<<"+";
     }

     cout<<x;

     if(y<10){
        print(x+(++y));
     }
}

int main(){
    cout<<endl;

    print(1);

    cout<<endl;

    return 0;
}
