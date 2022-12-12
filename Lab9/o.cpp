#include<bits/stdc++.h>
using namespace std;
int n, m;
map<string, string> q;
int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    string s1,s2;
    cin >> s1 >> s2;
    q[s1] = s2;
  }
  cin >> m;
  for(int i = 0; i < m; i++){
    string st1, st2;
    cin >> st1 >> st2;
    if(!q.count(st1)) // if the element with key K is present in the map container.
      cout << "login error\n";
    else if(q[st1] != st2)
      cout << "password error\n";
    else
      cout << "correct password\n";  
  }               
  return 0;
}