//guard
#ifndef INVENTORY_h
#define INVENTORY_h
#include <bits/stdc++.h>
#include <stdexcept>//throw invalid_argument
using namespace std;

class Inventory{
      //public:
      private://non-static
        string ProductDescriptor;
        int Balance;  
     public:
     Inventory():ProductDescriptor(""),Balance(0){//compiler default constructor
     }
        Inventory(string ProductDescriptor,int Balance){
           if(Balance>20){
           this->ProductDescriptor=ProductDescriptor;
           this->Balance=Balance;
           }else throw invalid_argument("Balance must be greater than 20.");
        }
        void Purchase(int amount){
          Balance=Balance+amount;
        }
        void Sale(int amount){
          if((Balance-amount)>20)
             Balance=Balance-amount;
          else throw invalid_argument("Error:your balance will be less than 20.");
        }
        int get_Balance(){
           return Balance;
        }

};
#endif