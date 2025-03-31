#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;

	cin>>n;
		int a = n;
	int m[1000] ={0};
	int nu = 0;
	while(n!=1){
		if(n%2!=0){
			n = n*3+1;
			m[nu] = n;
		}else{
			n /= 2;
			m[nu]= n;
		}
		nu++;
		
		
}
for(;nu-1>=0;nu--){
	cout<<m[nu-1]<<" ";
}
cout<<a;
	return 0;
}
/*你的代码是计算并输出 3n+1 问题（或称 Collatz 猜想）生成的序列，给定一个正整数 n，根据以下规则生成序列：

如果 n 为奇数，变成 n = n * 3 + 1
如果 n 为偶数，变成 n = n / 2
最终序列会以 1 结束
*/