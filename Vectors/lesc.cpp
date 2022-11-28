#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v; // vector <тип переменных(int,string,char,bool,double)> название вектора
    v.push_back(5);
    v.push_back(11);
    v.push_back(23);
    v.push_back(1);
    v.push_back(9);

    v.clear(); // очищает вектор

    /*if(v.empty()) cout << "Yes"; // пустой ли вектор 1 = true 0 = false
    else cout << "No";*/
    cout << v.empty();
}
