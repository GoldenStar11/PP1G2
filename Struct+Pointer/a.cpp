#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 5;

    int *px = &a; 
    cout << a << endl;
    cout << &a << endl;

    *px = 3;
    cout << px << endl;
    cout << *px << endl;

/*    
    int *pa = px;
    cout << pa << endl;
    cout << *pa << endl;
*/
    cout << a << endl;
    cout << &a << endl;
    return 0;
}