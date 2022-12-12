#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> myvector(8);                       // myvector: 0 0 0 0 0 0 0 0

  fill(myvector.begin(),myvector.begin()+4,5);   // myvector: 5 5 5 5 0 0 0 0
  fill(myvector.begin()+3,myvector.end()-2,8);   // myvector: 5 5 5 8 8 8 0 0

  cout << "myvector contains:";
  for(int i = 0; i < myvector.size(); i++){
    cout << myvector[i] << ' ';
  }

  return 0;
}