#include <bits/stdc++.h>

using namespace std;

bool isPrime(int a){
    for(int i = 2; i < sqrt(a); i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    vector <int> v;
    int n,cnt = 0,k;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i]) == true && v[i] > k) cnt++;
    }
    cout << cnt;
}