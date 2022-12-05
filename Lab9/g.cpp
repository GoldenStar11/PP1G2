#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<char> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(st.empty() == true) st.push(s[i]);
        else if(st.top() == '1' && s[i] == '1') st.pop();
        else st.push(s[i]);
}
/*  String 0111
    Stack 01
*/
    string t;
    while(st.size() != 0){
        t += st.top();
        st.pop();
    } // String t = 10 
    // Stack 
    reverse(t.begin(), t.end());
    cout << t; // 01
}