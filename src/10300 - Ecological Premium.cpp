#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll n, sum = 0; cin >> n;
	while(n--) {
		ll a, b, c; cin >> a >> b >> c;
		sum += c*a;
	}
	cout << sum << endl;
} 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--)  
		solve();
}
