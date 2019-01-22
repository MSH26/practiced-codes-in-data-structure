#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class CellPhone{
      string brand;
      string familyName;
      string modelNo;
      bool keyboardType;
      bool simType;
      int battery;
      bool isAvailable;
  public:
      ~CellPhone(){
           cout<<endl<<"DESTRUCTOR"<<endl;
      }

      void set(string x,string y,string z,bool p,bool q,int a,bool r){
            brand=x;
            familyName=y;
            modelNo=z;
            keyboardType=p;
            simType=q;
            battery=a;
            isAvailable=r;
      }
      string get_brand(){
           return brand;
      }
      string get_familyName(){
           return familyName;
      }
      string get_modelNo(){
           return modelNo;
      }
      int get_keyboardType(){
           return keyboardType;
      }
      int get_simType(){
           return simType;
      }
      int get_battery(){
           return battery;
      }
      int get_isAvailable(){
           return isAvailable;
      }
      void print(){
           cout<<"BRAND : "<<get_brand()<<endl;
           cout<<"FAMILY TYPE : "<<get_familyName()<<endl;
           cout<<"MODEL NO. : "<<get_modelNo()<<endl;
           cout<<"KEYBOARD TYPE : ";
           if(get_keyboardType()==0){
                cout<<"TYPE"<<endl;
           }
           else if(get_keyboardType()==1){
                cout<<"TOUCH"<<endl;
           }
           cout<<"SIM TYPE : ";
           if(get_simType()==0){
                cout<<"MINI"<<endl;
           }
           else if(get_simType()==1){
                cout<<"MICRO"<<endl;
           }
           cout<<"BATTERY : "<<get_battery()<<endl;
           cout<<"AVAILABILITY : ";
           if(get_isAvailable()==1){
                cout<<"YES"<<endl;
           }
           else if(get_isAvailable()==0){
                cout<<"NO"<<endl;
           }
      }
};

int main(){
    CellPhone *ptr;
    ptr=new CellPhone;

    ptr->set("Samsung","Galaxy","J1",1,0,1850,0);
    ptr->print();
    cout<<endl;
    ptr->set("Samsung","Galaxy Core","S4",1,1,2100,1);
    ptr->print();
    cout<<endl;
    ptr->set("Nokia","ASHA","CZ-5",0,0,1800,1);
    ptr->print();

    delete ptr;

    return 0;
}
