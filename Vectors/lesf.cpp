#include <bits/stdc++.h>

using namespace std;

int main(){
    set <int> s; // set <тип переменной> название
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(7);

    set<int>::iterator it; // it = i    *it = a[i]
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << ' ';
    }
}