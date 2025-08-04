#include<bits/stdc++.h>
using namespace std;
int n,b[25],t=0;

void in(){
	cout<<t<<": ";
	for(int i=1;i<=n;i++)cout<<b[i];
	cout<<endl;
}

int kt(){
	int kq=0;
	for(int i=1;i<=n;i++)kq+=b[i];
	if(kq%2==1)return 1;
	return 0;
	
}
void quaylui(int i){
int j;
for(j=0;j<=2;j++){
	b[i]=j;
	if(i==n){ 
	    t++;
	    if(kt())in();
		}
	else quaylui(i+1);
    } 
}

 main() {
	cin>>n;
	quaylui(1);
}
