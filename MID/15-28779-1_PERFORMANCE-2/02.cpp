#include<iostream>

using std::cout;
using std::endl;
using std::string;

struct Person{
      int ID;
      string Name;
      int Age;
      bool Status;
};
void set(struct Person *per, int I,string N, int A, bool S){
     per->ID=I;
     per->Name=N;
     per->Age=A;
     per->Status=S;
}
void print(struct Person *per){
        cout<<"PERSON ID : "<<per->ID<<endl;
        cout<<"PERSON NAME : "<<per->Name<<endl;
        cout<<"PERSON AGE : "<<per->Age<<endl;
        if(per->Status==1){
            cout<<"MARRIED"<<endl;
        }
        else
             cout<<"UNMARRIED"<<endl;
}

int main(){
    struct Person person;

    set(&person,2050,"SAKIB HOSSAIN",20,0);

    print(&person);

    return 0;
}
