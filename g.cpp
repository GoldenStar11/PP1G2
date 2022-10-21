#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; 
    int a[10];  
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        a[s[i] - 48]++; 
    }
    int max = INT_MIN, min = INT_MAX; 
	for(int i = 0; i < 10 ; i++) {
		if(a[i] == 0) continue; 
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	if(maxi == mini) cout << "YES";
	else cout << "NO"
}