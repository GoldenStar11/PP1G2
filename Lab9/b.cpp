#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v1;
    vector <int> v2;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 0) v1.push_back(x);
        else v2.push_back(x);
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.begin(), v2.end());
    vector <int> v;
    for(int i = 0; i < v1.size(); i++){
        v.push_back(v1[i]); 
    }
    for(int i = 0; i < v2.size(); i++){
        v.push_back(v2[i]);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}