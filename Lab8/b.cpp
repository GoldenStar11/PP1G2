#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n;i ++) { // 0 - 20 1 - 3
        int x;
        cin >> x;
        v.push_back(x); //20 3 7 9
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
}