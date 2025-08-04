#include<bits/stdc++.h>
using namespace std;
int n,k,b[30];
void in(){
	for(int i=1;i<=k;i++)cout<<b[i]<<" ";
	cout<<endl;
}
void quaylui(int i){
int j;
for(j=b[i-1]+1;j<=n-k+i;j++){
	b[i]=j;
	if(i==k) in();
	else quaylui(i+1);
    } 
}

 main() {
	cin>>n>>k;
	quaylui(1);
}
