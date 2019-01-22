#include<iostream>
#include<cstdio>

using std::cout;
using std::endl;

void print(int x){
    char y = 64;
    if(x<4){
        for(int i=1;i<=x;i++){
            printf("%c ",y+i);
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
