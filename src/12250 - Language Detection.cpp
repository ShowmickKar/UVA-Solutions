#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int i = 1;
	string s, x;
    while (cin >> s) {
        if (s[0] == '#') break;
        else if (s == "HELLO") x = "ENGLISH";
        else if (s == "HOLA") x = "SPANISH";
        else if (s == "HALLO") x = "GERMAN";
        else if (s == "BONJOUR") x = "FRENCH";
        else if (s == "CIAO") x = "ITALIAN";
        else if (s == "ZDRAVSTVUJTE") x = "RUSSIAN";
        else  x = "UNKNOWN";
        cout << "Case " << i << ": " << x << "\n";
        i++;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}

