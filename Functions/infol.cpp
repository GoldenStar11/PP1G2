#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int k;
    cin >> s >> k;
    for(int i = 0; i < s.size(); i++){
        if(s[i] - k < 65){
            s[i] = s[i] - k + 26;
        }
        else{
            s[i] = s[i] - k;
        }
    }
    cout << s;
}