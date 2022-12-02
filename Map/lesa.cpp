#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    /*
        1 2
        6 4
        5 2
    */
    sort(a, a + n);
    
    for(int i = 0; i < n; i++)
        cout << a[i].first << " " << a[i].second << "\n";
}
    /* map <string, string> mp
        22B31421 Rauan 
        22B43425 Almir 
        22B42186 Alikhan 
        22B90321 Sanat
        22B42150 Rauan 
    */
   /*
        12 Bayron
        3 Akerke
        4 Ali
        7 Adi
        12 Hasan
        3 Jambyl
        9 Bayron
        3 Akerke
   */
