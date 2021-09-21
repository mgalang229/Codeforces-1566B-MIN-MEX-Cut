#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	//input
	string s;
	cin >> s;
	
	//check if there are 0s
	int z=count(s.begin(), s.end(), '0');
	if(z==0) {
		cout << "0\n";
		return;
	}
	
	//check if the whole string consists of 0s
	int f=s.find('0');
	int l=s.rfind('0');
	cout << (l-f+1==z?1:2) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
