#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v; // vector <тип переменных(int,string,char,bool,double)> название вектора
    v.push_back(6); //0
    v.push_back(16);//1
    v.push_back(23);//2
    v.push_back(2);//3
    v.push_back(9);//4
    // 5 - 2 = 3  v.end() = v.size() = 5
    //v.erase(v.end() - 2);

    for(int i = 0; i < v.size(); i++){ // 0  1  2 3 4
        if(v[i] % 2 == 0){             // 23 9
            v.erase(v.begin() + i);
            i--; //0 - 1 = -1  1 - 1 = 0
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}
