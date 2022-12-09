#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, int> mp;
    string s;
    getline(cin, s);
    while(!s.empty()){
        mp[s.substr(0, s.find(' '))]++;
        s.erase(0, s.find(' ')+1);
    }
    map <string,int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " : " << it->second << endl; 
    }
}