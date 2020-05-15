#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, ans = 0; cin >> n;
	vector<int> a(n);
	for (auto &it : a) cin >> it;
	sort (a.begin(), a.end());
	for (int i = 1; i < n; i++) ans += a[i] - a[i - 1];
	cout << 2*ans << endl;	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--)  
		solve();
}

