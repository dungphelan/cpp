#include <bits/stdc++.h>
using namespace std;

int n,m=3,check[100];
char B[100]; 

void in() {
    for (int i = 1; i <= m; i++) cout << B[i];
    cout << endl;
}

void kt(){
	int a=0,b=0,c=0;
	for (int i = 1; i <= m; i++){
		if(B[i]=='A')a++;
		if(B[i]=='B')b++;
		if(B[i]=='C')c++;
	}
	if((a>0&&b>=a&&c>=b))in();
}

void quayluichu(int i) {
    for (int j = 0; j < 3; j++) {
            B[i] = 'A' + j;
            if (i == m)kt();
            else quayluichu(i + 1);
        
    }
}

int main() {
    cin >> n;
    if(n>=3)while(m<=n){
	quayluichu(1);
	m++;}
    return 0;
}

