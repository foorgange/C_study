/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	deque<int>q(m);
	int a;
	int cnt = 0;
	int qq[1010] = {0};
	for(int i = 1;i<=n;i++){
		cin>>a;
		if(!qq[a]){
			cnt++;
		
		if(q.size()==m){
			int x =q.front();
            q.pop_front();
            qq[x] = 0;
            
		}
		q.push_back(a);
		qq[a]= 1;
		
	}
		
	}
	cout<<cnt;
	
	
	return 0;
}
*/


#include<bits/stdc++.h>  // 引入头文件，包含常用的C++标准库
using namespace std;

int main() {
    int m, n;  // m 表示缓存的最大容量，n 表示页面访问次数
    cin >> m >> n;  // 读取缓存容量 m 和页面访问次数 n

    deque<int> q(m);  // 创建一个大小为 m 的双端队列，用来模拟缓存，默认大小为 m
    int a;  // 用来存储当前访问的页面
    int cnt = 0;  // 用来记录页面缺失的次数
    int qq[1010] = {0};  // 定义一个数组 qq，长度为 1010，初始化所有元素为 0，用来记录哪些页面在缓存中

    for (int i = 1; i <= n; i++) {  // 遍历所有页面访问
        cin >> a;  // 读取当前访问的页面号

        if (!qq[a]) {  // 如果页面 a 不在缓存中
            cnt++;  // 页面缺失，增加缺页次数

            if (q.size() == m) {  // 如果缓存已满
                int x = q.front();  // 获取队列的第一个元素，即最久未使用的页面
                q.pop_front();  // 从队列中移除最久未使用的页面
                qq[x] = 0;  // 更新数组 qq，标记页面 x 不在缓存中
            }

            q.push_back(a);  // 将当前页面 a 加入队列（缓存）
            qq[a] = 1;  // 更新数组 qq，标记页面 a 已经在缓存中
        }
    }

    cout << cnt;  // 输出缺页次数

    return 0;  // 程序结束
}


