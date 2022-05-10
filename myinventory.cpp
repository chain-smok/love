#include "INVENTORY.h"
#include "INVENTORY.h"

int main(){
  Inventory *inv3=new Inventory("Card",100);
  inv3->Purchase(90);
  inv3->Sale(80);
  cout<<"the balance of inv3="<<inv3->get_Balance()<<endl;
  //cout<<inv3->get_Balance()<<endl;

  Inventory inv1("Soda",100),inv2("Apple",200);
  cout<<"balance inv1="<<inv1.get_Balance()<<endl;
  //inv1.Balance=100;
  inv1.Sale(40);
  cout<<"balance inv1="<<inv1.get_Balance()<<endl;
  inv2.Purchase(50);
  inv2.Sale(10);
  cout<<"balance of inv2="<<inv2.get_Balance()<<endl;
} 