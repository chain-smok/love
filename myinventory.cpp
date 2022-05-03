#include <bits/stdc++.h>
using namespace std;

class Inventory{
      //public:
      private:
        string ProductDescriptor;
        int Balance;  
     public:
        Inventory(string ProductDescriptor,int Balance){
           if(Balance<=20){
              cout<<"Error:Balance must be greater than 20."<<endl;
              return;
           }
           this->ProductDescriptor=ProductDescriptor;
           this->Balance=Balance;
        }
        void Purchase(int amount){
          Balance=Balance+amount;
        }
        void Sale(int amount){
          if((Balance-amount)<=20){
             cout<<"Error:your balance will be less than 20."<<endl;
             return;
          }
          Balance=Balance-amount;
        }
        int get_Balance(){
           return Balance;
        }

};
int main(){
  Inventory inv1("Soda",180),inv2("Apple",200);
  cout<<"balance inv1="<<inv1.get_Balance()<<endl;
  //inv1.Balance=100;
  inv1.Sale(80);
  cout<<"balance inv1="<<inv1.get_Balance()<<endl;
  inv2.Purchase(50);
  inv2.Sale(120);
  cout<<"balance of inv2="<<inv2.get_Balance()<<endl;
}