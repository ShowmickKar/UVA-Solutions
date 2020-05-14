#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	string s, x;
	int j = 0;
	while(getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '"' && j % 2 == 0) {
				x += "``";
				j++;
			}
			else if (s[i] == '"' && j&&1) {
				x += "''";
				j++;
			}
			else x += s[i];
		}
		cout << x << endl;
		x.clear();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}

