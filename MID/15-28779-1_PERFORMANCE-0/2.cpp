#include<iostream>

using std::cout;
using std::endl;

int main(){
    int A[]={0,1,2,3,4,5,6,7,8,9} , B[10] , i,j;

    for(i=0,j=9;i<=9;i++,j--){
        B[j]=A[i]*3;
    }

        cout<<endl;

    for(i=0;i<=9;i++){
        cout<<B[i]<<" ";
    }

    cout<<endl;

    return 0;
}
