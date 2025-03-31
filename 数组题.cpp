#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,num,a;
	cin>>N;
	int n[1000][10],cnt;
	int sum[1000];
	for(int i = 1;i<=N;i++){
		for(int j = 1;j<=3;j++){
			cin>>n[i][j];
			sum[i] +=n[i][j];
		}
	}
	for(int i = 1;i <=N; i++ ){
		for(int j = i+1; j<=N;j++){
			
			if(abs(n[i][1] - n[j][1]) <= 5 && 
				abs(n[i][2] - n[j][2]) <= 5 && 
				abs(n[i][3] - n[j][3]) <= 5 && 
				abs(sum[i] - sum[j]) <= 10){
				num++;
			}
			
		}
	}

	cout<<num;
		
	return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, num, a;
    cin >> N;  // 输入学生数量 N

    int n[1000][10], cnt;
    int sum[1000] = {0};  // 初始化 sum 数组，记录每个学生的三门课的总分
    
    // 输入每个学生的三门课成绩并计算总分
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= 3; j++){
            cin >> n[i][j];  // 输入每个学生的三门课成绩
            sum[i] += n[i][j];  // 计算每个学生的总分
        }
    }

    num = 0;  // 统计符合条件的学生对数
    // 双重循环比较每一对学生
    for(int i = 1; i <= N; i++){
        for(int j = i + 1; j <= N; j++){
            // 判断两位学生的成绩差异和总分差异是否都满足条件
            if(abs(n[i][1] - n[j][1]) <= 5 &&  // 第一门课差异小于等于 5
               abs(n[i][2] - n[j][2]) <= 5 &&  // 第二门课差异小于等于 5
               abs(n[i][3] - n[j][3]) <= 5 &&  // 第三门课差异小于等于 5
               abs(sum[i] - sum[j]) <= 10){    // 总分差异小于等于 10
                num++;  // 如果满足条件，计数加 1
            }
        }
    }

    cout << num;  // 输出满足条件的学生对数

    return 0;  // 程序结束
}

*/