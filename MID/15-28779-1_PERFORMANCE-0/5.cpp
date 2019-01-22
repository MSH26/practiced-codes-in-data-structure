#include<iostream>

using std::cout;
using std::endl;

int main(){
    int arr[]={34,21,78,4,2,8,23} ,i,max=arr[0],min=arr[0];

    cout<<endl;

    for(i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"HIGHEST VALUE : "<<max<<endl;

    cout<<endl;

    for(i=0;i<=6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"LOWEST VALUE : "<<min<<endl;

    return 0;
}
