#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int s;
    cin >> s;
    string d = "0123456789";
    for(int i = 1; i < d.size(); i++){
        for(int j = 0; j < d.size(); j++){
            for(int k = 0; k < d.size(); k++){
                if(d[i] + d[j] + d[k] - 48 * 3 == s){
                    cout << d[i] << d[j] << d[k] << endl;
                }
            }
        }
    }
}