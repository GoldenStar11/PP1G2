#include <bits/stdc++.h>

using namespace std;

int main(){
    set <int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; // 11 29 3 -19 2
        s.insert(a); // -19 2 3 11 29
    }
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << ' ';
    }
}