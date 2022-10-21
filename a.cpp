#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 96){
            s[i] -= 32;
        }
    }
    cout << s;
}