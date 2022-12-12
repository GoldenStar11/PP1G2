#include <bits/stdc++.h>

using namespace std;

bool IsEven (int i) { 
    if(i % 2 == 0) return true; // even - true, odd - false 
    else return false;
}

int main () {
  vector <int> myvector;
  for (int i = 1; i < 10; i++) myvector.push_back(i); // myvector: 1 2 3 4 5 6 7 8 9

  int cnt = count_if(myvector.begin(), myvector.end(), IsEven); // 5
  cout << "myvector contains " << cnt  << " even values.\n";

  return 0;
}