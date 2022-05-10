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
    void set_radius(int r){
       radius=r;
    }
    int get_radius(){return radius;}
};
int main(){
  CIRCLE c1,c2(20);
  c1.set_radius(10);
  cout<<c1.get_radius()<<endl;
  cout<<"Area of c1="<<c1.Area()<<endl;
  //cout<<"Area of c2="<<c4->Area()<<endl;
}