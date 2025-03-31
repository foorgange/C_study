#include <iostream>
using namespace std;

int main() {
    const int N = 1e5 + 10;
    int a[N] = {0}, b[N] = {0};
    int n, m;
    
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] - a[i - 1];
    }

    while (m--) {
        int l, r, c;
        cin >> l >> r >> c;
        b[l] += c;
        if (r + 1 <= n) {
            b[r + 1] -= c;
        }
    }
    
    // 计算最终的数组 a
    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1] + b[i];
    }
    
    // 输出结果
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
