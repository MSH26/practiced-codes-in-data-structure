#include<iostream>

using std::cout;
using std::endl;

int tmp = 0;

void print(int x){
     if(tmp>0){
        cout<<"+";
     }
     cout<<x;
     int y;
     y = tmp;
     tmp = x;

     if(x<1000){
        print(x+y);
     }
}

int main(){
    cout<<endl;

    print(1);

    cout<<endl;

    return 0;
}
