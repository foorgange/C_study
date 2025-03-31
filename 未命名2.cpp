#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N][2]; // 使用0和1表示y=0和y=1的存在

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        unordered_set<int> modified; // 记录被修改的x值
        int max_x = 0;
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            modified.insert(x);
            max_x = max(max_x, x);
        }
        long long sum = 0;
        // 处理类型1：同一x有两点的情况
        for (int x : modified) {
            if (a[x][0] && a[x][1]) {
                // 统计右侧所有点的数量（y=0和y=1）
                for (int j = x + 1; j <= max_x; ++j) {
                    sum += a[j][0] + a[j][1];
                }
            }
        }
        // 处理类型2：中间点的左右存在点的情况
        for (int x : modified) {
            if (x > 0) { // 确保x-1 >=0
                // 检查中间点y=0，左右y=1存在
                if (a[x][0] && a[x-1][1] && a[x+1][1]) sum++;
                // 检查中间点y=1，左右y=0存在
                if (a[x][1] && a[x-1][0] && a[x+1][0]) sum++;
            }
        }
        // 重置被修改的x值
        for (int x : modified) {
            a[x][0] = 0;
            a[x][1] = 0;
        }
        cout << sum << "\n";
    }
    return 0;
}
