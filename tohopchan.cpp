#include <bits/stdc++.h>
using namespace std;

int n, k, b[30];

void in() {
    int sum = 0;
    for (int i = 1; i <= k; i++) {
        sum += b[i];
    }
    if (sum % 2 == 0) { 
        for (int i = 1; i <= k; i++) cout << b[i] << " ";
        cout << endl;
    }
}

void quaylui(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; j++) {
        b[i] = j;
        if (i == k) in();       
	    else quaylui(i + 1);    
	    }
}

int main() {
    cin >> n >> k;
    b[0] = 0; 
	quaylui(1);
    return 0;
}
