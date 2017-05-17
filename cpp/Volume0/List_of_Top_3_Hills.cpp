# include <iostream>
# include <algorithm>
using namespace std;
int main(){
  int Num_mountains = 10;
  int heights[Num_mountains];
  for (int i = 0;i<Num_mountains;i++)
    cin >> heights[i];
  sort(heights,heights+Num_mountains,greater<int>());
  for(int i=0;i<3;i++)
    cout << heights[i] << endl;

}
//動的配列とどちらがよいか考察
