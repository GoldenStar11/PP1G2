#include <bits/stdc++.h>

using namespace std;
int a[21][21];
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
}