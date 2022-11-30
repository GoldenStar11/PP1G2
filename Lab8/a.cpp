#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n;i ++) { //0 - 20  1 - 3 2 - 7 3 - 9
        int x;
        cin >> x;
        v.push_back(x);  // 20 3 7 9
    } // x = 9 v = {20 3 7 9}
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i ++) 
        cout << v[i] << " ";
}