#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int q, n, m, x, y;
	while(scanf("%d", &q) == 1 && q) {
		scanf("%d%d", &n, &m);
		while(q--) {
			scanf("%d%d", &x, &y);
			if (x == n || y == m) puts("divisa");
			else if (x < n && y > m) puts("NO");
			else if (x > n && y > m) puts("NE");
			else if (x > n && y < m) puts("SE");
			else puts("SO");
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}
