#include<iostream>

using namespace std;

//iterative solution
int findMax(int a[], int n) {
    int max = a[0];

    for(int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

//recursive solution
int findMaxRec(int a[], int n, int i, int m) { // m = max = -100000; i - обычный счетчик fora
    //break statement
    if (i >= n) { // i = 0 >= 5 false i = 1 >= 5 false i = 2 >= 5 false   i = 3 >= 5 false  i = 4 >= 5 false
        //i = 5 >= 5
        return m; // m = 101
    }

    if (a[i] > m){ // 27 > -100000 true   88 > 27 true 19 > 27 false 101 > 88 true  57 > 101 false
        return findMaxRec(a, n, i + 1, a[i]);  // m = a[0] = 27 => m = a[1] = 88 => m = a[3] = 101
    } //findMaxRec(a,5,4,101)

    return findMaxRec(a, n, i + 1, m); // m = 101 i = 2 + 1 = 3; i + 1 = 4 + 1
}
/*
5
27 88 19 101 57
1) i = 0  27 > 27 false => find(a,4,1,27)
2) i = 1 88 > 27 true => find(a,4,2,88)   m = a[1] = 88
3) i = 2 19 > 88 false => find(a,4,3,88)
4) i = 3 57 > 88 false => find(a,4,4,88) 
5) i = 4 >= n = 4 return m = 88
*/


//finding max
int main() {
    
    int n;
    cin >> n;

    int a[n];

    //reading input from user
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = findMaxRec(a, n, 0, -100000);

    cout << "recursive max = " << max << endl;
    

    return 0;
}