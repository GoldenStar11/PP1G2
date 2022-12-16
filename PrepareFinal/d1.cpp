#include <bits/stdc++.h> 
#define ll long long 
#define pb push_back 
#define f first  
#define s second  
using namespace std; 
 
int main(){ 
  map <string, double> mp; 
 
  mp["A+"] = 4.0; 
  mp["A"] = 3.75; 
  mp["B+"] = 3.50; 
  mp["B"] = 3.00; 
  mp["C+"] = 2.50; 
  mp["C"] = 2.0; 
  mp["D+"] = 1.5; 
  mp["D"] = 1.0; 
  mp["F"] = 0; 
 
  int n; 
  cin >> n; 
  string s, t; 
  int m; 
  string k; 
  int a; 
  vector <pair <double, string> > v; 
  while(n--){ 
    cin >> s >> t; 
    s += ' ' + t; 
    double gpa = 0; 
    int sum = 0; 
    cin >> m; 
    for(int i = 0; i < m; i++){ 
      cin >> k >> a; 
      gpa += mp[k] * a; 
      sum += a; 
    } 
    gpa /= sum; 
 
    v.pb(make_pair(gpa, s)); 
  } 
 
  sort(v.begin(), v.end()); 
 
  for(int i = 0; i < v.size(); i++){  
    cout << fixed << setprecision(3);
    cout << v[i].s << ' '<< v[i].f << '\n'; 
  } 
  return 0; 
}