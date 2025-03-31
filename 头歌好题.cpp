/*任务描述
5位跳水高手将参加10m高台跳水决赛，有好事者让5人据实力预测比赛结果。
A选手说：B第二，我第三。
B选手说：我第二，E第四。
C选手说：我第一，D第二。
D选手说：C最后，我第三。
E选手说：我第四，A第一。
决赛成绩公布后，每位选手的预测都只说对了一半，即一对一错。
请编程解出比赛的实际名次。
输入 
无
输出 
输出按ABCDE的顺序，每个字母后跟着实际的名次，用数字1~5表示。
如果5人的排名是ACBDE，则应输出：
A1 B3 C2 D4 E5
注意A和1之间没有空格，1和B之间有一个空格，E5之后有一个回车。
输入样例 1 
无
输出样例 1
按要求输出

开始你的任务吧，祝你成功！
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 选手姓名
    string players = "ABCDE";
    // 所有可能的排名
    vector<int> ranks;
    ranks.push_back(1);
    ranks.push_back(2);
    ranks.push_back(3);
    ranks.push_back(4);
    ranks.push_back(5);
    // 存储最终的结果
    vector<int> result(5);

    do {
        // 将当前排列的结果复制到 result 中
        for (int i = 0; i < 5; ++i) {
            result[i] = ranks[i];
        }

        // 检查每位选手的预测是否只对了一半
        bool valid = true;

        // A: B第二，自己第三
        if (!((result[1] == 2) != (result[0] == 3))) valid = false;

        // B: 自己第二，E第四
        if (!((result[1] == 2) != (result[4] == 4))) valid = false;

        // C: 自己第一，D第二
        if (!((result[2] == 1) != (result[3] == 2))) valid = false;

        // D: C最后，自己第三
        if (!((result[2] == 5) != (result[3] == 3))) valid = false;

        // E: 自己第四，A第一
        if (!((result[4] == 4) != (result[0] == 1))) valid = false;

        // 如果所有预测都符合条件，输出结果
        if (valid) {
            for (int i = 0; i < 5; ++i) {
                cout << players[i] << result[i];
                if (i < 4) cout << " ";
            }
            cout << endl;
            break; // 找到符合条件的排列，跳出循环
        }
    } while (next_permutation(ranks.begin(), ranks.end()));

    return 0;
}
