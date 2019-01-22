#include<iostream>

using std::cout;
using std::endl;

int main(){
    int A[2] [3] = {11, 7, 5, 2, 9, 8} ,i,j;

    cout<<endl<<"THE CONTENTS OF MY 2D ARRAY ARE GIVEN BELOW IN A LINEAR FASHION : "<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<A[i] [j]<<"  ";
        }
    }

    cout<<endl;

    return 0;
}
