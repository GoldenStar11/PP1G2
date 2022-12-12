#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    vector <int> v1;
    int n;
    while(cin >> n){
        if(n == 0) break;
        v.push_back(n);
    }
    if(v.size() % 2 == 1){
        for(int i = 0; i < v.size()/2+1; i++){
            int sum = 0; 
            if(v[i] == v[v.size() - 1 - i]){
                v1.push_back(v[i]);    
            }
            else{
                sum = v[i] + v[v.size() - 1 - i];  
                v1.push_back(sum);
            }
        }
    }
    else{
        for(int i = 0; i < v.size()/2; i++){
            int sum = 0; 
            sum = v[i] + v[v.size() - 1 - i];  
            v1.push_back(sum);
        }
    }
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << ' ';
    }
}