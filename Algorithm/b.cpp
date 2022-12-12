#include <bits/stdc++.h>

using namespace std;

int main (){
  vector <int> myvector;

  for (int i=1; i<10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

  rotate(myvector.begin(),myvector.begin() + 3,myvector.end());
                                                  // 4 5 6 7 8 9 1 2 3

  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); it++){
    cout << ' ' << *it;
}
  return 0;
}