#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int left = 0, right = n, best = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (mid == 0) {
                best = mid;
                left = mid + 1;
                continue;
            }
            bool ok = true;
            for (int i = 0; i < mid; i++) {
                int months_needed = (n - mid) + (i + 1);
                if (a[i] > 1LL * x * months_needed) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                best = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << best << '\n';
    }
    return 0;
}
