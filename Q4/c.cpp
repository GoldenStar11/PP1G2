#include <bits/stdc++.h>

using namespace std;

int main(){
    map <int, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    int sum = 0;
    map <int,int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second == 1)   sum += it->first;
    }
    cout << sum;
}