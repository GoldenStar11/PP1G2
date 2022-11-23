#include<bits/stdc++.h>

using namespace std;

int findSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int findSumRecursively(int n){
    if(n == 0){
        return 0;
    }
    return n + findSumRecursively(n-1); // n + n-1 + n-2 + n-3 + find(n-4)
}
/*
18 -7
17 -6
16 -5
15 -4
14 -3
13 -2
12 -1
11 0 - n-10
10 1 - n-9
9 2 - n-8
8 3 - n-7
7 4 - n-6
6 5 - n-5
5 6 - n-4
4 7 - n-3   
3 8 - n-2
2 9 - n-1    
1 10 - n

0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
*/

int main() {
    int n;
    cin >> n;
    cout << findSumRecursively(n);
    return 0;
}