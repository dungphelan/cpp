#include<bits/stdc++.h>
using namespace std;

int n, a[20],k = 0; 

void in(){
    for(int i = 1; i <= n; i++) {
        cout << a[i];
        if(i < n) cout << " ";
    }
    cout << endl;
}

void quaylui(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(j == 1) k++;
        if(i == n){
            if(k % 2 == 0) in();
        } else {
            quaylui(i + 1);
        }
        if(j == 1) k--; 
    }
}

int main(){
    cin >> n;
    quaylui(1);
    return 0;
}
