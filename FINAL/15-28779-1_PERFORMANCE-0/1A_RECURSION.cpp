#include<iostream>

using std::cout;
using std::endl;

void print(int x){
     if(x>1){
        cout<<"+";
     }

     cout<<x;

     if(x<20){
        print(x+1);
     }
}

int main(){
    cout<<endl;

    print(1);

    cout<<endl;

    return 0;
}
