#include <bits/stdc++.h>

using namespace std;

bool Xor(bool x, bool y){
    if(x == y) return false;
    else return true;
}

int main(){
    bool a,b;
    cin >> a >> b;
    cout << Xor(a,b);
}