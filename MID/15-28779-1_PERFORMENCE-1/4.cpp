#include<iostream>

using std::cout;
using std::endl;

int main(){
    int A [2] [3] = {1, 2, 3, 4, 5, 6} , B [3] [2] = {1, 2, 1, 2, 1, 2} , C[2] [3] ,i,j,k,x,sum=0,a[2][2];

    cout<<"\n\n"<<"THE RESULTANT MATRIX : "<<endl;

    for(i=0;i<2;i++){
            cout<<"\t\t\t";
       for(k=0;k<2;k++){
          for(j=0;j<3;j++){
             x=A[i] [j] * B[j] [k];
             sum=sum+x;
          }
          a[i] [j]=sum;
          cout<<a[i] [j]<<" ";
          sum=0;
       }
       cout<<endl;
    }

    return 0;
}
