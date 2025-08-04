#include <bits/stdc++.h>
using namespace std;

int n, k, b[30];
int snt(int n) {
	if(n == 0 || n == 1) return 1;
	int a = 0, b = 1;
	while(b < n) {
		int tmp = b;
		b = a + b;
		a = tmp;
	}
	return b == n;
}
void in() {
	int sum = 0;
	for (int i = 1; i <= k; i++) {
	    sum += b[i];
	} 
	if (snt(sum)){
	    for (int i = 1; i <= k; i++) cout << b[i] << " ";
	    cout << endl;
	}
}

void quaylui(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; j++){
	    b[i] = j;
	    if (i == k) in();
	    else quaylui(i + 1);
    } 
}

 int main() {
	cin>>n>>k;
	quaylui(1);
}
