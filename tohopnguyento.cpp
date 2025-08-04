#include <bits/stdc++.h>
using namespace std;

int n, k, b[30];
int snt(int n){
	if(n<2)return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1; 
}
void in() {
	int sum = 0;
	for (int i = 1; i <= k; i++) {
	    sum += b[i];
	} 
	if (snt(sum )){
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
