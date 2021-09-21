#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	//input
	string s;
	cin >> s;
	
	//separate the the segments of 1 and 0 (MEX(0) = 1 and MEX(1) = 0)
	int ans=0;
	for(int i=0; i+1<(int)s.size(); ++i) {
		if(s[i]=='0'&&s[i+1]=='1')
			ans+=1;
	}
	if(s[(int)s.size()-1]=='0')
		ans++;
	
	//the answer will never be greater than 2
	cout << min(ans, 2) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
