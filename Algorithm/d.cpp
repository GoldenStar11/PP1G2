#include <bits/stdc++.h>

using namespace std;

bool myfunction (int i, int j) {
  return (i==j);
}

int main () {
  int myints[] = {10,20,20,20,30,30,20,20,10};           // 10 20 30 20 10 20 20 30 20
  vector<int> myvector (myints,myints+9);

  // using default comparison:
  vector<int>::iterator it;
  it = unique (myvector.begin(), myvector.end());   // 10 20 30 20 10 ?  ?  ?  ?
                                                         //                ^

  myvector.resize(distance(myvector.begin(),it) ); // 10 20 30 20 10

  // using predicate comparison:
  unique(myvector.begin(), myvector.end(), myfunction);   // (no changes)

  // print out content:
  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;

  return 0;
}