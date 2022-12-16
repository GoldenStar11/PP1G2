#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    int n;
    int cnt = 0;
    while(cin >> n){
        cnt++;
        if(n == 0) continue;             
        v.push_back(n);
        if(cnt == 15) break;
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}