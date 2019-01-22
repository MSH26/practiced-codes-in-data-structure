#include "LinkedList.h"
using namespace std;


int main(){
    LinkedList graph[7];
    int N,i,x,y;
    cin>>N;

    for(i=0; i<N; i++){
        cin>>x>>y;
        graph[x].insertBack(y);
        graph[y].insertBack(x);
    }

    for(i=0; i<=6; i++){
        cout<<i<<" : ";
        for(int j=1; j<=graph[i].size(); j++){
            if(j>1){
                cout<<",";
            }
            cout<<graph[i].getValueAt(j);
        }
        cout<<endl;
    }

    return 0;
}
