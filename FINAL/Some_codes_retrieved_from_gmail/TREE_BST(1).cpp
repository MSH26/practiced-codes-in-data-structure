#include"TreeHeader.h"

int main(){
    tree_list tree;
    int numberOfNode , parentNode , childNode;
    char posNode;

    cin>>numberOfNode;

    for(int i=0;i<numberOfNode;i++){
        cin>>childNode;
        if(i>0){
            cin>>parentNode>>posNode;
        }
        tree.insert(childNode,parentNode,posNode);
    }

    return 0;
}
