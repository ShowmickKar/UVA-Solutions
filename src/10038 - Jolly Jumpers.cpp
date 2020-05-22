#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[3005];

void solve() {
	int n;
	while(scanf("%d", &n) != EOF) {
		bool flag = true;
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		if (n == 1) {
			printf("Jolly\n");
			continue;
		}
		vector<int> d;
		for (int i = 0; i < n - 1; i++) {
			d.push_back(abs(a[i] - a[i + 1]));
			/*if (d.size() > 1 && abs(d[d.size() - 1] - d[d.size() - 2]) != 1) {
				printf("Not jolly\n");
				flag = false;
				break;
			} */
		}
		sort(d.begin(), d.end());
		if (d[0] != 1 || d[d.size() - 1] != n - 1) flag = false;
		for (int i = 0; i < d.size(); i++) {
			if (d[i] != i + 1) {
				flag = false;
				break;
			}
		}
		if (flag) printf("Jolly\n");
		else printf("Not jolly\n"); 	
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
 
	/* int t; scanf("%d", &t);
	while(t--) */ 
		solve();
}
