#include<iostream>

using std::cout;
using std::endl;
using std::string;
int main(){

    char CArray[5] [5]={'A','B','C','D','E','1','A','B','C','D','0','1','A','B','C','0','0','1','A','B','0','0','0','1','A'} ;
    int a[100],z,i,j,k=0;

//FIRST SHAPE:

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(CArray[i] [j]>=65 && CArray[i] [j]<=90){
                cout<<CArray[i] [j]<<" ";
            }
        }
        cout<<endl;
    }

//SECOND SHAPE:

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(CArray[i] [j]==48 || CArray[i] [j]==49){
                a[j]=0;
                cout<<CArray[i] [j]<<" ";
                if(j==3){
                   z=0;
                }
            }
            else
                a[j]=1;
        }

        cout<<endl;

        if(z==0){
            for(i=0;i<5;i++){
               cout<<a[i]<<" ";
            }
        }
    }

    cout<<endl<<endl;
//THIRD SHAPE:

    for(i=4;i>=0;i--){
        if(i!=3){
            for(j=0;j<5;j++){
                if(CArray[i] [j]>=65 && CArray[i] [j]<=90){
                    cout<<CArray[i] [j];
                }
            }
            cout<<endl;
        }
    }

//FORTH SHAPE:

    for(i=0;i<5;i++){
        for(j=4;j>=0;j--){
            if(CArray[i] [j]==48 || CArray[i] [j]==49){
                cout<<CArray[i] [j]<<" ";
            }
        }
        if(i==4){
            cout<<0;
        }
        cout<<endl;
    }

    cout<<endl;
//FIFTH SHAPE:

    for(i=4;i>=0;i--){
        if(i==3){
            for(;k<5;k++){
                for(z=0;z<k;z++){
                   cout<<"  ";
                }
                for(j=0;j<5;j++){
                   if(CArray[i] [j]==65 || CArray[i] [j]==66|| CArray[i] [j]==49){
                    cout<<CArray[i] [j]<<" ";
                   }
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
