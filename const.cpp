#include <bits/stdc++.h>
using namespace std;
class COUNT{
  friend void setX(COUNT&,int);//function prototype,不是成員
  private:
   int x;
  public:
   COUNT();//function prototype
   void print();//function prototype
};
COUNT::COUNT(){
  x=0;
}
void setX(COUNT &c,int val){
  c.x=val;
}
void COUNT::print(){
   cout<<x;
}
int main()
{
  COUNT c1;
  c1.print();
  setX(c1,90);
  cout<<endl;
  c1.print();
}