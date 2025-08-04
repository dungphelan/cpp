#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long power(long long n, long long m) {
    long long kq = 1;
    n %= MOD;
    while (m > 0) {
        if (m % 2 == 1)
            kq = kq * n% MOD ;
        n = n * n% MOD;
        m /= 2;
    }
    return kq;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << power(n, m)<< endl;
    }
    return 0;
}

