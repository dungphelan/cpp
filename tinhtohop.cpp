#include<bits/stdc++.h>
using namespace std;

long long tohop(long long n,long long k){
	if (k > n - k) k = n - k; 
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res *= n - i + 1;
        res /= i;
    }
    return res;
}

void run(){
    long long n,k;
	cin>>n>>k;
	cout<<tohop(n,k)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)run();
	return 0;
}
