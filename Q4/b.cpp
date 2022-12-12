#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        int a;
        cin >> s >> a;
        mp[s] = a;
    }
    int max = 0;
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second > max) max = it->second;
    }
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second == max) cout << it->first << endl;
    }
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << ' ' << max - it->second << endl;
    }
}