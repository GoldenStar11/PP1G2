#include <bits/stdc++.h>

using namespace std;

double power(double a, int n){
    double s = 1;
    for(int i = n; i < 0; i++) {
        s *= 1 / a;
    } 
    return s;
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
}