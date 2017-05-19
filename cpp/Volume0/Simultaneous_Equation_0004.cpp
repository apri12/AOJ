#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  double a,b,c,d,e,f;
  while(cin >> a >> b >> c >> d >> e >>f){
    double delta = a*e - d*b;
    double x = (1/delta)*(e*c+(-b)*f);
    double y = (1/delta)*((-d)*c+a*f);
    //cout << x << " " <<y << endl;
    printf("%4.3f 4.3%f\n",x,y);
  }
}
