#include<bits/stdc++.h>
using namespace std;
int n,k,b[30],t=1;

int snt(int n){
	if(n<2)return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1; 
}

void in(){
	cout<<t<<": ";
	for(int i=1;i<=k;i++)cout<<b[i]<<" ";
	cout<<endl;
}
void quaylui(int i){
int j;
for(j=b[i-1]+1;j<=n-k+i;j++){
	b[i]=j;
	if(i==k) {
	if(snt(t))in();
	t++;}
	else quaylui(i+1);
    } 
}

 main() {
	cin>>n>>k;
	quaylui(1);
}
