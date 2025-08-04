#include<bits/stdc++.h>
using namespace std;

void Hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout <<"chuyen dia thu"<<n<<"tu coc: "<< A << " -> " << C << '\n';
        return;
    }
    Hanoi(n - 1, A, C, B);       
    cout << A << " -> " << C << '\n'; 
    Hanoi(n - 1, B, A, C);       
}

void run(){int n;
    cin >> n;
    Hanoi(n, 'A', 'B', 'C');
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)run();
    return 0;
}


