#include <bits/stdc++.h>
using namespace std;

int n, b[30], check[30], t=0;

void in() {
    for (int i = 2; i <= n; i++) t=t+(b[i-1]-b[i]);
    if(t>0){
	for (int i = 1; i <= n; i++) cout << b[i] << " ";
    cout << endl;}
	t=0;
    
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
