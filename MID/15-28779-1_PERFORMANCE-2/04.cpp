#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person{
      int id;
      string name;
      int age;
      bool status;
  public:
      void set(int x,string y,int z,bool p){
            id=x;
            name=y;
            age=z;
            status=p;
      }
      int get_id(){
           return id;
      }
      string get_name(){
           return name;
      }
      int get_age(){
           return age;
      }
      int get_status(){
           return status;
      }
      void print(){
           cout<<get_id()<<"\t";
           cout<<get_name()<<"\t";
           cout<<get_age()<<"\t";
           if(get_status()==1){
               cout<<"MARRIED";
           }
           else
               cout<<"UNMARRIED";
      }
};

int main(){
    Person *ptr;
    ptr=new Person;

    ptr->set(2050,"SAKIB HOSSAIN",20,0);

    cout<<endl<<" ID\t    NAME\tAGE\t STATUS"<<endl;

    ptr->print();

    cout<<endl;

    delete ptr;

    return 0;
}
