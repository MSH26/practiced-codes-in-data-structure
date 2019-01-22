#include "LinkedList.h"
#include<stack>
using namespace std;

int instack[]={0,0,0,0,0,0,0};

int DFS(LinkedList graph[] , int s, int g){
     stack <int> S;
     S.push(s);
     int tmp;
     while(S.top()!=g){
        tmp=S.top();
        cout<<S.top()<<" ";
        S.pop();
        instack[tmp] = 1;
        for(int j=1; j<=graph[tmp].size(); j++){
            if(instack[graph[tmp].getValueAt(j)] == 0){
                S.push(graph[tmp].getValueAt(j));
                instack[graph[tmp].getValueAt(j)] = 1;
            }
        }
        if(S.top()== g){
            cout<<S.top()<<endl<<"THE GOAL FOUND!!!!"<<endl;
        }
     }
}

int main(){
    stack <int> S;

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

    DFS(graph,x,y);

    return 0;
}
