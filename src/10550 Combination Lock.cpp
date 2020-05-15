#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int i, f, s, t;
	while (cin >> i >> f >> s >> t) {
		if (i == 0 && f == 0 && s == 0 && t == 0) break;
		int ans = 0;
		ans += (i > f) ? (i - f)*9 : (i - f + 40)*9;
		ans += (s > f) ? (s - f)*9 : (s - f + 40)*9;
		ans += (s > t) ? (s - t)*9 : (s - t + 40)*9;

		ans += 360*3;
		cout << ans << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}

