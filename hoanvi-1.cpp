#include <bits/stdc++.h>
using namespace std;

int n, b[30], check[30], t = 1;

void in() {
    cout << t << ": ";
    t++;
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    cout << endl;
}

void run(int j) {
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            b[j] = i;
            check[i] = 1; 
            if (j == n) in();
            else run(j + 1);
            check[i] = 0; 
        }
    }
}

int main() {
    cin >> n;
    run(1);
    return 0;
}
