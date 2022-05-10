#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
class CIRCLE{
  private:
    int radius;
  public:
    CIRCLE():radius(0){//default constructor
    }
    CIRCLE(int r):radius(r){//parameter constructor
    }
    ~CIRCLE(){}
    float Area(){
      return radius*radius*M_PI;
    }
};
int main(){
  float c=10.123;
  float &d=c;
  int b=100;
  int &a=b;//a reference to b
  b=100;
  cout<<"a="<<a<<endl;
  a=300;
  cout<<"b="<<b<<endl;
  CIRCLE c1,c2(20);
  CIRCLE &c3=c2;//c3 reference to c2
  CIRCLE *c4;
  c4=&c2;
  cout<<"Area of c1="<<c1.Area()<<endl;
  cout<<"Area of c2="<<c4->Area()<<endl;
}