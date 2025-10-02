#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(2*n);
        for (int i = 0; i < 2*n; i++) cin >> a[i];

        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            b[i] = a[n+i] - a[i];
        }

        sort(b.begin(), b.end());

        vector<long long> pref(n+1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i-1] + b[i-1];
        }

        for (int k = 1; k <= n; k++) {
            long long ans = pref[n] - pref[n-k]; // sum of k largest
            cout << ans << (k == n ? '\n' : ' ');
        }
    }
    return 0;
}
