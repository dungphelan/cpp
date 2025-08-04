#include<bits/stdc++.h>
using namespace std;
int n;
char b[100];

void in() {
    bool A = true, B = true;
    for (int i = 1; i <= n; i++) {
        if (b[i] != 'A') A = false;
        if (b[i] != 'B') B = false;
    }
    if (A || B) return; 
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    cout << endl;
}

void quaylui(int i){
int j;
for(j=0;j<=1;j++){
	if(j==0)b[i]='A';
	else b[i]='B';
	if(i==n) in();
	else quaylui(i+1);
    } 
}

int main() {
	cin>>n;
	quaylui(1);
}
