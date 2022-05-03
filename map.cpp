#include <bits/stdc++.h>
using namespace std;
int main()
{
  int m,j;
  int k;
  string s;
  cin>>m>>j;
  map<string,int>hay;
  while(m--)
  {
    int p;
    cin>>s>>p;
    hay[s]=p;
  }
    while(j--)
  {
     int ans=0;
     while(cin>>s&&s!="."){
     ans+=hay[s];}
     cout<<ans<<endl;
  }




}