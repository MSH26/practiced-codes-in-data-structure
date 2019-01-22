#include "LinkedList.h"
#include<cstdio>


void display(LinkedList lst[5]){
     for(int i=0;i<5;i++){
        int y =1;
        printf("%c : ",65+i);
        while(lst[i].getValueAt(y)!=1){
            if(y!=1){
                cout<<",";
            }
            cout<<lst[i].getValueAt(y);
            y++;
        }
        cout<<endl;
     }
}

int main(){
    LinkedList lst[5];

    lst[0].insertFront('D');
    lst[0].insertFront('B');

    lst[1].insertFront('A');
    lst[1].insertFront('C');
    lst[1].insertFront('E');

    lst[2].insertFront('B');
    lst[2].insertFront('E');

    lst[3].insertFront('A');

    lst[4].insertFront('C');
    lst[4].insertFront('B');

    display(lst);

    return 0;
}
