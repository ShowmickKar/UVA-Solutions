#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
      
void solve() {
    int n, k;
    while(scanf("%d%d", &n, &k) != EOF) {
        int count = n, used = n;
        while(used >= k) {
            n = used / k;
            used = used % k + n;
            count += n;
        }
        cout << count << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
 
    /* int t; cin >> t;
    while (t--)  */
        solve();

    return 0;
} 
