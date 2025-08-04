#include <bits/stdc++.h>
using namespace std;

set<string> kq;

void run(int i, int k, string &s, string a) {
    if (a.size() == k) {
        kq.insert(a); 
        return;
    }
    for (int j = i; j < s.size(); j++) {
        run(j + 1, k, s, a + s[j]); 
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        kq.clear(); 
        run(0, k, s, ""); 
        for (const auto &x : kq) {
            cout << x << endl;
        }
    }
    return 0;
}
