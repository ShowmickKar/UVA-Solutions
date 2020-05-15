#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, check = 0;; 
	while(cin >> n) {
		if (check) cout << endl;
		map<string, int> balance;
		vector<string> names(n);
		for (int i = 0; i < n; i++) {
			cin >> names[i];
			balance[names[i]] = 0;
		}
		for (int i = 0; i < n; i++) {
			string giver; cin >> giver;
			int amount, nOfReceiver; cin >> amount >> nOfReceiver;
			if (nOfReceiver == 0) continue;
			int perPerson = amount/nOfReceiver;
			balance[giver] -= perPerson*nOfReceiver;
			for (int j = 0; j < nOfReceiver; j++) {
				string reciever; cin >> reciever;
				balance[reciever] += perPerson;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << names[i] << " " << balance[names[i]] << endl;
		}
		check = 1;
	}
} 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; cin >> t;
	while (t--)  */
		solve();
}
