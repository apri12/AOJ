# include <iostream>
using namespace std;

int main(){
  int a,b,tmp;
  while(cin >> a >> b){
    int tmp_a = a;
    int tmp_b = b;
    for(;;){
      if(b%a==0) break;
      tmp = a;
      a = b % a;
      b = tmp;
    }
    int GCD = a;
    int LCM = (tmp_b / a)*tmp_a;
    cout << GCD << " " << LCM<< endl;
  }
}
