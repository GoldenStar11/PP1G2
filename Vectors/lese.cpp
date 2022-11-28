/*
v.begin() = 0
v.end() = v.size()
v.front() = v[0] = v.at(0)
v.back() = v[v.size() - 1] = v.at(v.size() - 1)
v.push_back - соңына қосады 

*/
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> v(5);
    for(int i = 0; i < 5; i++){
        cout << v[i] << ' ';
    }
}