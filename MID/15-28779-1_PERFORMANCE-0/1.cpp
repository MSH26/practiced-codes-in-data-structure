#include<iostream>

using std::cout;
using std::endl;

int main(){
    int A[]={0,1,2,3,4,5,6,7,8,9} , B[10] , i,j;

    cout<<endl;
    cout<<"THE VALUES ARE : ";

    for(i=0,j=9;i<=9;i++,j--){
        cout<<A[i]<<" ";
        B[j]=A[i];
    }

        cout<<"\n\n";
        cout<<"AFTER REVERSING THE VALUES : ";

    for(i=0;i<=9;i++){
        cout<<B[i]<<" ";
    }

    cout<<endl;

    return 0;
}
