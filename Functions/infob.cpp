#include <bits/stdc++.h>

using namespace std;

double power(double a, int n){
    double s = 1;
    if(n >= 0){
        for(int i = 0; i < n; i++) {
            s *= a;
        } 
    }
    if(n < 0){
        for(int i = n; i < 0; i++) {
            s *= 1 / a;
        } 
    }
    return s;
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
}