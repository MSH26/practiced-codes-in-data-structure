#include<iostream>

using std::cout;
using std::endl;

int main(){
    int A[2] [3] = {1, 2, 3, 4, 5, 6} , B[2] [3] = {1, 2, 1, 2, 1, 2} , C[2] [3] ,i,j;

    for(i=0;i<2;i++){
       for(j=0;j<3;j++){
          C[i] [j]=A[i] [j] + B[i] [j];
          //cout<<C[i] [j]<<"  ";
          //I didn't display the output sir because you didn't ask for any display in the question.
       }
       //cout<<endl;
    }

    return 0;
}
