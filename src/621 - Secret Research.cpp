#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	string s; cin >> s;
	if (s == "1" || s == "4" || s == "78") puts("+");
	else if (s[s.length() - 1] == '5' && s[s.length() - 2] == '3') puts("-");
	else if (s[0] == '9' && s[s.length() == '4']) puts("*");
	else puts("?");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--)  
		solve();
}
