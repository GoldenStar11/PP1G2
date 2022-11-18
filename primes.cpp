#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;

    if(n == 2)
        return true;

    if(n % 2 == 0)
        return false;

    for (int i = 3; i < n; i+=2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= 7919; i++) {
        if(isPrime(i)){
            cnt++;
        }
        if(cnt == n){
            cout << i;
            return 0;
        }
    }
}