#include <iostream>
#include <string>

using namespace std;

int main(){
    string s,t;
    int c = 0;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        if(s.substr(i, t.size()) == t && s[i] == t[0]){
            c++;
        }
    }
    if(c != 0) cout << "YES";
    else cout << "NO";
}