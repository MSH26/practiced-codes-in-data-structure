#include "LinkedList.h"

void matrix_display(LinkedList lst[5][5]){
     cout<<"The adjacency matrix of a graph :"<<endl<<endl;
     for(int i=0;i<5;i++){
        cout<<"\t";
        for(int j=0;j<5;j++){
            if(lst[i][j].size()!=0){
               //cout<<lst[i][j].getValueAt(lst[i][j].size());
                cout<<1<<" ";
            }
            else if(lst[i][j].size()==0){
                cout<<0<<" ";
            }
        }
        cout<<endl;
     }
}

void list_display(LinkedList lst[5][5]){
    int x;
     cout<<"The adjacency list of a graph :"<<endl<<endl;
     for(int i=0;i<5;i++){
        x = 1;
        cout<<"\t"<<char(65+i)<<" : ";
        for(int j=0;j<5;j++){
            if(lst[i][j].size()!=0){
                if(x!=1){
                    cout<<",";
                }
                cout<<lst[i][j].getValueAt(lst[i][j].size());
                x++;
            }
        }
        cout<<endl;
     }
}


int main(){
    LinkedList lst[5][5];

    lst[0][3].insertFront('D');
    lst[0][1].insertFront('B');

    lst[1][0].insertFront('A');
    lst[1][2].insertFront('C');
    lst[1][4].insertFront('E');

    lst[2][1].insertFront('B');
    lst[2][4].insertFront('E');

    lst[3][0].insertFront('A');

    lst[4][2].insertFront('C');
    lst[4][1].insertFront('B');

    list_display(lst);

    cout<<endl;

    matrix_display(lst);

    return 0;
}
