#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, m, c, testcase = 1;
	while (cin >> n >> m >> c) {
		if (n == 0 && m == 0 && c == 0) break;
		int maxPower = 0, sum = 0;
		bool fused = false;
		vector<int> capacity(n);
		vector<bool> turnedOn(n);
		for (int i = 0; i < n; i++) {
			cin >> capacity[i];
			turnedOn[i] = false;
		}
		for (int i = 0; i < m; i++) {
			int x; cin >> x; x--;
			if (turnedOn[x]) {
				sum -= capacity[x];
				maxPower = max(maxPower, sum);
				turnedOn[x] = false;
			}
			else {
				sum += capacity[x];
				maxPower = max(maxPower, sum);
				turnedOn[x] = true;
			}
		}
		if (maxPower > c) fused = true;
		cout << "Sequence " << testcase << endl;
		if (fused) cout << "Fuse was blown.\n\n";
		else {
			cout << "Fuse was not blown.\n";
			cout << "Maximal power consumption was " << maxPower << " amperes.\n\n";
		}
		testcase++;
	}
} 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}
