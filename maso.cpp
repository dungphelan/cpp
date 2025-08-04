#include <bits/stdc++.h>
using namespace std;

int n;
char b[100];   
int a[100];    
int check[100]; 

void in() {
    for (int i = 1; i <= n; i++) cout << b[i];
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

void quayluiso(int i) {
    for (int j = 1; j <= n; j++) {
        a[i] = j;
        if (i == n) in();
        else quayluiso(i + 1);
    }
}

void quayluichu(int i) {
    for (int j = 0; j < n; j++) {
        if (!check[j]) {
            b[i] = 'A' + j;
            check[j] = 1;
            if (i == n) quayluiso(1);
            else quayluichu(i + 1);
            check[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    quayluichu(1);
    return 0;
}

