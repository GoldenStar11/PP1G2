#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(min > a[i]) min = a[i];
        if(max < a[i]) max = a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > min && a[i] < max) cnt++;
    }
    cout << max - min - 1 - cnt;
}