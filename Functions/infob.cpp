#include <bits/stdc++.h>

using namespace std;

double power(double a, int n){
    double s = 1;
    for(int i = 0; i < n; i++) {
        s *= a;
    }
    return s;
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
}