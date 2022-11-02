#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cntlow = 0, cntup = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){  //s[i] >= 65 && s[i] <= 90
            cntup++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){    //s[i] >= 97 && s[i] <= 122
            cntlow++;
        }
    }
    cout << cntlow << ' ' << cntup;
}