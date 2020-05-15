#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int c = 1;

void solve() {
	vector<int> a(3); for (auto &it : a) cin >> it;
	sort (a.begin(), a.end());
	printf("Case %d: %d\n", c, a[1]);
	c++;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--)  
		solve();
}
