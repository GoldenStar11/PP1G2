#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int a,b;
    getline(cin, s);
    cin >> a >> b;
    string t,str;
    for(int i = a - 1; i < b; i++){
        t += s[i];
    }
    for(int i = 0; i < s.size(); i++){
        if(i < a - 1 || i > b - 1)
        str += s[i];
    }
    reverse(t.begin(), t.end());
    str.insert(a-1, t);
    cout << str;
}