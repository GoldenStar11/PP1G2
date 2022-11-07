#include <bits/stdc++.h>

using namespace std;

void dif(int a[], int b[], int n){
    int d[n]; 
    for(int i = 0; i < n; i++){
        d[i] = abs(a[i] - b[i]);
        cout << d[i] << ' ';
    }
}
int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    dif(a, b, n);
}