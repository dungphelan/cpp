#include <bits/stdc++.h>
using namespace std;

int n, k, b[30];

void in() {
	    for (int i = 1; i <= k; i++) cout << b[i] << " ";
	    cout << endl;
}

void quaylui(int i) {
    for (int j = n - k + i; j >= b[i - 1] + 1; j--){
	    b[i] = j;
	    if (i == k) in();
	    else quaylui(i + 1);
    } 
}

 int main() {
 	int t;
 	cin>>t;
 	while(t--){
	cin>>n>>k;
	quaylui(1);}
}
