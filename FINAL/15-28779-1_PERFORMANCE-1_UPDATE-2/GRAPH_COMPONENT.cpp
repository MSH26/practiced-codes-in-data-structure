#include "LinkedList.h"
#include<queue>
#include<sstream>
using namespace std;

int inqueue[]={0,0,0,0,0,0,0,0,0};

void BFS(LinkedList graph[] , int s){
     queue <int> Q;
     Q.push(s);
     int tmp;
     while(Q.empty()!=true){
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
}

int main(){
    stringstream ss;

    int N,x,y;
    string str;

    cin>>N;

    LinkedList graph[N];

    for(int i=0;i<=N;i++){
       //cout<<i<<endl;
       getline(cin,str);
       ss << str;
       while(ss>>x!=0){
           graph[i-1].insertBack(x);
           //cout<<x<<endl;
       }
       ss.clear();
    }

    cout<<endl;

    for(int i=0;i<N;i++){
        if(inqueue[i]==0){
            cout<<"Connected component : ";
            BFS(graph,i);
            cout<<endl;
        }
    }

    if(N==0){
        cout<<"Connected component : "<<endl;
    }

    return 0;
}
