#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v; // vector <тип переменных(int,string,char,bool,double)> название вектора
    v.push_back(5);
    v.push_back(11);
    v.push_back(23);
    v.push_back(1);
    v.push_back(9);
    // 5 11 23 1 9 
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size();i++){
        cout << v[i] << ' ';
    }
}
