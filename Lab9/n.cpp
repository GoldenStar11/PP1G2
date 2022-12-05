using namespace std;
int main() {
    int n; cin >> n;
    map<int, int> m;
    map<int, int> m_s;
    int cnt = 0;
    for (int i = 1; i < n + 1; ++i) {
        int a;
        cin >> a;
        m[i] = a;
        m_s[a] = i;
    }
     for (int i = 1; i < n; i++) {
        for (int j = i+1; j < n + 1; j++){
            if(m_s.count(m[i]^m[j]) > 0)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}