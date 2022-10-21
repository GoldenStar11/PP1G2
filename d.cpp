#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    bool b = false;
    cin >> s;
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] == s[s.size() - 1  - i]){
            b = true;
        }
        else{
            b = false;
        }
    }
    if(b) cout << "YES";
    else cout << "NO";
}