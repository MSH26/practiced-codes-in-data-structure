#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int A[2] [3] = {10, 25, 17, 28, -45, 14} ,x,i,j;

    cout<<endl;
    cout<<"ENTER KEY TO SEARCH : ";
    cin>>x;
    cout<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(A[i] [j] == x){
                cout<<"POSITION : "<<i<<" "<<j<<endl;

                return 0;
            }
        }
    }

    return 0;
}
