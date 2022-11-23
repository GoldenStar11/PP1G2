#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    if (n == 0)
        return 0; // базовый случай (условие завершения)
    if (n == 1)
        return 1; // базовый случай (условие завершения)        
    return fibonacci(n-1) + fibonacci(n-2);  // fibonaci(2) + fibonaci(1) = fibonaci(1) + fibonaci(0) + fibonaci(1) = 1 + 0 + 1 = 2  
} // 4) fibonaci(3) + fibonaci(2) = fibonaci(2) + fibonaci(1) + fibonacI(1) + fibonaci(0) = fibonaci(1) * 3 + fibonaci(0)
 // 5) fibonaci(4) + fibonaci(3) = fibonaci(3) + fibonaci(2) + fibonaci(2) + fibonaci(1) = 
 // fibonaci(2) + fibonaci(1) + fibonaci(1) + fibonaci(0) + fibonaci(1) + fibonaci(0) + fibonaci(1)=
 // fibonaci(1) + fibonaci(0) + + fibonaci(1) + fibonaci(1) + fibonaci(0) + fibonaci(1) + fibonaci(0) + fibonaci(1)= 5
// Выводим первые n чисел Фибоначчи
int main(){
    int a; 
    cin >> a;  // қанша сан шығару керек
    for (int i = 0; i < a; i++){
        cout << fibonacci(i) << " ";
    } // 0 1 2 3 4 5 6 7  8  9 
      // 0 1 1 2 3 5 8 13 21 34
    return 0;
}