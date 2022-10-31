#include <bits/stdc++.h> 
 
using namespace std; 
 
int main() { 
    int n; 
    cin >> n; 
    int a[n]; 
    for(int i = 0; i < n; i++) { 
        cin >> a[i]; 
    } 
    int c = a[n-1]; 
    for(int i = n - 1; i >= 0; i--){ 
        a[i] = a[i-1]; // a[n-1] = a[n-2]   
    } // 1 2 3 4 => 1 1 2 3
    a[0] = c; // 1 1 2 3 => 4 1 2 3
    for(int i = 0; i < n; i++){ 
        cout << a[i] << ' '; 
    } 
    
  
}