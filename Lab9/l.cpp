#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y,sum;
    cin >> n;
    pair <int,int> p[n];
    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        sum = x + y;
        p[i].first = sum;
        p[i].second = i;
    }
    sort(p, p+n);
    for(int i = 1; i <= n; i++){
        cout << p[i].second << ' ';
    }
}