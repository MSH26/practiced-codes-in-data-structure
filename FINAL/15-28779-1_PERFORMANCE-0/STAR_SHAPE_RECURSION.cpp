#include<iostream>

using std::cout;
using std::endl;

void print(int x){
    if(x<4){
        for(int i=1;i<=x;i++){
            cout<<"*";
        }
        cout<<endl;
        print(x+1);
    }
}

int main(){
    cout<<endl;

    print(1);

    return 0;
}
