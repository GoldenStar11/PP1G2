#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v; // vector <тип переменных(int,string,char,bool,double)> название вектора
    v.push_back(5);
    v.push_back(11);
    v.push_back(23);
    v.push_back(1);
    v.push_back(9);
    // 5 11 23
    // {1 12 ... 13 14 10 11 12}
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v.at(i); // v.at(i) == v[i]
    }
    cout << sum;
}
