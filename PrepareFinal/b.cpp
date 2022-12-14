#include <bits/stdc++.h>

using namespace std;
int a[10];
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n;
    while(cin >> n){
        if(n == 0) break;
        a[n]++;
    }// 1 1 4 1 5 8 6 3 5 1 0
    /*
    1 2 3 4 5 6 7 8 9 
    4 0 1 1 2 1 0 1 0 
    */
    for(int i = 1; i < 10; i++){
        cout << a[i] << ' ';
    }
}