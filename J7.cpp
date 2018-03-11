#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 // your code goes here
 double t, p, a;
 cin>>t;
 while(t--) {
  cin>>p>>a;
  cout<<fixed<<setprecision(2)<<(pow((p-(sqrt(pow(p, 2)-(24*a))))/12, 
2)*((p/4)-(2*((p-(sqrt(pow(p, 2)-(24*a))))/12))))<<endl;
 }
 return 0;
}
