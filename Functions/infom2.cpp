#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int a,b;
    getline(cin, s);
    cin >> a >> b;
    string t;
    for(int i = b - 1; i > a; i--){
        t += s[i];
    }
    s.erase(a-1, b-a+1);
    s.insert(a-1, t);
    cout << s;
}