#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, m; cin >> n >> m;
	cout << (n == m ? "=" : n < m ? "<" : ">") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--)  
		solve();
}

