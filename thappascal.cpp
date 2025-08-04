#include <iostream>
using namespace std;
int kq(int n, int k) {
    if (k == 1 || k == n) {
        return 1;
    } else {
        return kq(n - 1, k - 1) + kq(n - 1, k);
    }
}
void run(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << kq(i, j) << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    run(n);
    return 0;
}
