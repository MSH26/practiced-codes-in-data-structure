#include "LinkedList.h"
#include<queue>
using namespace std;

int inqueue[]={0,0,0,0,0,0,0};

void BFS(LinkedList graph[] , int s, int g){
     queue <int> Q;
     Q.push(s);
     int tmp;
     while(Q.front()!=g){
        tmp=Q.front();
        cout<<Q.front()<<" ";
        Q.pop();
        inqueue[tmp] = 1;
        for(int j=1; j<=graph[tmp].size(); j++){
            if(inqueue[graph[tmp].getValueAt(j)] == 0){
                Q.push(graph[tmp].getValueAt(j));
                inqueue[graph[tmp].getValueAt(j)] = 1;
            }
        }
    }
    if(Q.front()== g){
        cout<<Q.front()<<endl<<"THE GOAL FOUND!!!!"<<endl;
    }
}

int main(){
    LinkedList graph[7];
    int N,x,y;
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>x>>y;
        graph[x].insertBack(y);
        graph[y].insertBack(x);
    }

    for(int i=0; i<=6; i++){
        cout<<i<<" : ";
        for(int j=1; j<=graph[i].size(); j++){
            if(j>1){
                cout<<",";
            }
            cout<<graph[i].getValueAt(j);
        }
        cout<<endl;
    }

    cout<<"ENTER THE ROOT ITEM : ";
    cin>>x;
    cout<<"ENTER THE GOAL ITEM : ";
    cin>>y;

    BFS(graph,x,y);

    return 0;
}
