#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    /*
    5
    1 1 2 2 3
    
    1 2
    2 2
    3 1
    */
   int cnt = 0;
   map<int, int> :: iterator it;
   for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second >= 2) cnt++;
        //cout << it -> first << ' ' << it -> second << endl;
   }
   cout << cnt;
}