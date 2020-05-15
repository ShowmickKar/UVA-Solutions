#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll x, temp; cin >> x;
	temp = 315*x + 36962;
	int cnt = 0;
	while(1) {
		if (cnt == 1) {
			cout << abs(temp % 10) << endl;
			return;
		}
		temp /= 10;
		cnt++;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--)  
		solve();
}
