#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s.substr(i, t.size()) == t){
            cnt++;
        }
    }
    if(cnt > 0) cout << "YES";
    else cout << "NO";
    return 0;
}