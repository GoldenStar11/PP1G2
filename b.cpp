#include <iostream>

using namespace std;

int main(){
    string s;
    getline(s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') cnt1++; 
        if(s[i] >= 'A' && s[i] <= 'Z') cnt2++;
        /*if(s[i] > 96){
            s[i] -= 32;
        }*/
    }
    cout << s;
}