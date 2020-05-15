#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int cycleLength(int x) {
	int count = 0;
	while(x >= 1) {
		if (x == 1) return count;
		else if (x&1) x = 3*x + 1;
		else x /= 2;
		count++;
	}
}

void solve() {
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF) {
		int x = a, y = b;
		if (x > y) swap(x, y);
		int maxCycleLength = -1;
		for (int i = x; i <= y; i++) {
			//cout << cycleLength(i, 0) << endl;
			maxCycleLength = max(maxCycleLength, cycleLength(i));
		}
		printf("%d %d %d\n", a, b, maxCycleLength + 1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}
