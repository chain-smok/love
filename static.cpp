#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
class CIRCLE{
 private:
  int radius;
  static int count;
 public:
  CIRCLE():radius(0){count++;}
  float Area(){
    return radius*radius*M_PI;
  }
  static int get_count(){
    return count;
  }
};
  int CIRCLE::count=0;
int main(){
  CIRCLE c1;
  cout<<"total count="<<c1.get_count()<<endl;
  CIRCLE c2;
  cout<<"total count="<<c1.get_count()<<endl;
  cout<<"total count="<<c2.get_count()<<endl;
}