#include<bits/stdc++.h>
using namespace std;

int n,k,a[100]={1};

void in(){
	for(int i=1;i<=k;i++)cout<<a[i]<<" ";
	cout<<endl;
}

void run(int i){
	for(int j=a[i-1];j<=n;j++){
		a[i]=j;
		if(i==k)in();
		else run(i+1);
	}
}

int main(){
	cin>>n>>k;
	run(1);
	return 0;
}
