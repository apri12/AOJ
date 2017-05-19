# include <iostream>
# include <algorithm>
using namespace std;

int main(){
  int N;
  int side[3];
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> side[0] >> side[1] >> side[2];
    sort(side,side+3);
    if (side[0]*side[0]+side[1]*side[1] == side[2]*side[2]){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
