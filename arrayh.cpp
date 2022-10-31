#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int t; /*
            0 1 2 3     0 1 2 3     0 1 2  3   
            7 8 9 10    8 7 9 10    8 7 10 9   
        t = a[1] = 8
        a[1] = a[0] = 7
        a[0] = t = 8 

        t = a[3] = 10
        a[3] = a[2] = 9
        a[2] = t = 10
    */
    for(int i = 1; i < n; i+=2){
        t = a[i];
        a[i] = a[i - 1];
        a[i-1] = t;
    } 
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}