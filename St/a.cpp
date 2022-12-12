#include <bits/stdc++.h>

using namespace std;

int main(){
    queue <int> q;
    int n, i = 1;
    cin >> n;
    while(i <= n){
        q.push(i);
        i++;
    }/*
        7
        2 3 4 5 6 7
    */
    while(!q.empty()){
        cout << q.front() << ' ' << q.back() << endl;
        q.pop();
    }
}