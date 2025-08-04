#include<bits/stdc++.h>
using namespace std;
int n,b[25],t;

void in(){
	for(int i=1;i<=n;i++)cout<<b[i];
	cout<<" ";
}

void quaylui(int i){
int j;
for(j=0;j<=1;j++){
	if(!j)b[i]=6;
	else b[i]=8;
	if(i==n)in();
	else quaylui(i+1);
    } 
}
void run(){
    cin>>n;
	cout<<pow(2,n)<<endl;
	quaylui(1);
	cout<<endl;
}
 main() {
 	cin>>t;
 	while(t--)run();
}
