#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Customer{
     int id;
     string name;
     string email;
};

struct Product{
     int id;
     string name;
     float unitPrice;
     float quantity;
};

struct Order{
      int id;
      Customer customer;
      Product product;
};

void set(struct Order *order,int I,int I2,string N,string E,int I3,string N2,float U,float Q){
    struct Product product;
    struct Customer customer;
    order->id=I;
    order->customer.id=I2;
    order->customer.name=N;
    order->customer.email=E;
    order->product.id=I3;
    order->product.name=N2;
    order->product.unitPrice=U;
    order->product.quantity=Q;
}
void print(struct Order *order,struct Product product,struct Customer customer){
   cout<<"ORDER NUMBER : "<<order->id<<endl;
   cout<<"CUSTOMER DETAILS : "<<endl;
   cout<<"CUSTOMER ID : "<<order->customer.id<<endl;
   cout<<"CUSTOMER NAME : "<<order->customer.name<<endl;
   cout<<"CUSTOMER EMAIL : "<<order->customer.email<<endl;
   cout<<"PRODUCT DETAILS : "<<endl;
   cout<<"PRODUCT ID : "<<order->product.id<<endl;
   cout<<"UNIT PRICE : "<<order->product.name<<endl;
   cout<<"UNIT PRICE : "<<order->product.unitPrice<<endl;
   cout<<"QUANTITIES : "<<order->product.quantity<<endl;
}
int main(){
    struct Order order;
    struct Product product;
    struct Customer customer;

    set(&order,13,250,"SAKIB","sakib@aiub.edu",205,"SHIRT",5000.0,2);

    print(&order,product,customer);

    return 0;
}
