#include <iostream>

using namespace std;

int main(){
    string s;
    getline(s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122) cnt1++; 
        if(s[i] >= 65 && s[i] <= 90) cnt2++;
        /*if(s[i] > 96){
            s[i] -= 32;
        }*/
    }
    cout << s;
}