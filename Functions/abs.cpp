#include <bits/stdc++.h>

using namespace std;

int abs(int a){
    if(a >= 0) return a;
    else if(a < 0) return -1 * a;
}

int main(){
    int n;
    cin >> n;
    cout << abs(n);
}