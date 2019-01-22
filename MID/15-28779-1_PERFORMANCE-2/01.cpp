#include<iostream>

using std::cout;
using std::endl;
using std::string;

struct Product{
      int ID;
      string Name;
      float UnitPrice;
      int Quantity;
      bool Status;
};

void set(struct Product *pro, int I,string N, float U, int Q, bool S){
     pro->ID=I;
     pro->Name=N;
     pro->UnitPrice=U;
     pro->Quantity=Q;
     pro->Status=S;
}


void print(struct Product *pro){
        cout<<"PRODUCT ID : "<<pro->ID<<endl;
        cout<<"PRODUCT NAME : "<<pro->Name<<endl;
        cout<<"PRODUCT UNITPRICE : "<<pro->UnitPrice<<endl;
        cout<<"PRODUCT QUANTITY : "<<pro->Quantity<<endl;
        if(pro->Status==1){
            cout<<"AVAILABILITY : AVAILABLE"<<endl;
        }
        else
             cout<<"AVAILABILITY : NOT AVAILABLE"<<endl;
}


int main(){
    struct Product pro1,pro2,pro3;

    set(&pro1, 01,"BAT",550.0,1,1);
    set(&pro2, 02,"BALL",30.0,2,1);
    set(&pro3, 03,"STAMP",40.0,6,0);

    print(&pro1);
    cout<<endl;
    print(&pro2);
    cout<<endl;
    print(&pro3);

    return 0;
}
