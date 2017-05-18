# include <iostream>
using namespace std;
int main(){
  int a,b;
  while( cin >> a >> b){
  int N = a+b;
  int num_digit = 0;
  while (true){
    num_digit++;
    N = N/10;
    if(N<1) break;
    }
  cout << num_digit << endl;
  }
}

/*
log_10で対数を取るのが一番綺麗っぽい...
*/
